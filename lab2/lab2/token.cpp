#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
#include"mainWindow.h" 


void Token_stream::reset()
{
	full = false;
	buffer = 0;
}

void Token_stream::putback(Token t) //根据不同数据类型调用不同的Token的构造函数
{
	if (full) throw bufferFull();
	buffer = t;
	full = true;
}
Token Token_stream::get()
{
	if (full)
	{
		full = false;
		return buffer;
	}

	char ch;
//	std::cin >> ch;
	calculateFlow >> ch; //从生成的calculateFlow里面读取字符
	switch (ch)
	{
	case print:
	case quit:
	case'(':case')':case'+':case'-':case'*':case'/':case'%':case'!':
		return Token(ch);
	case'.':
	case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
	{
		calculateFlow.putback(ch);
		double val;
		calculateFlow >> val;
		return Token(number, val);
	}
	case'x':
		return Token(ch);
	case'M'://表示开启存储功能
	{
		saveResult = true;
		return Token(ch);
	}
	case'R'://读取存储的功能
	{
		if (saveResult == false) throw badToken();
		return Token(number, preResult);
	}
	default:
	{		throw badToken();	}
	}
}
Token_stream::Token_stream() :full(false), buffer(0) {}



double expression()//处理加减法
{
	double left = term();
	Token t = ts.get();
	while (true)
	{
		switch (t.kind)
		{
		case'+':
			left += term();
			t = ts.get();
			break;
		case'-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

double term()			//处理乘除法和取模
{
	double left = primary();
	Token t = ts.get();
	while (true)
	{
		switch (t.kind)
		{
		case'*':
			left *= primary();
			t = ts.get();
			break;
		case'/':
		{
			double d = primary();
			if (d == 0) throw divByZero();
			left /= d;
			t = ts.get();
			break;
		}
		case '%':
		{
			int num1 = static_cast<int>(left); //判断是不是整数
			if (num1 != left) throw intRequired();
			double tmp = primary();
			int num2 = static_cast<int>(tmp);
			if (num2 == 0) throw divByZero();
			if (num2 != tmp) throw intRequired();
			left = num1%num2;
			t = ts.get();
			break;
		}
		case'!':
		{
			int num = static_cast<int>(left);
			if (num != left) throw intRequired();
			left = multi(num);
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);
			return left;
		}
	}
}

double primary() //处理括号和+-符号
{
	Token t = ts.get();
	switch (t.kind)
	{
	case'(':
	{
		isNegtive = false;
		double d = expression();
		t = ts.get();
		if (t.kind != ')') throw missRightPart();
		return d;
	}
	case number:	return t.value;
	case '-':	return -primary();
	case'+':return primary();
	default: throw priExp();
	}

}

int multi(int num)
{
	int result = 1;
	if (num == 0)
	{
		result = 1;
		return result;
	}
	if (num < 0 && isNegtive == false)throw posNumExp();
	if (num < 0 && isNegtive == true)
	{
		num = 0 - num;
		for (int i = 1; i <= num; i++)
			result *= i;
		isNegtive = true;//还原负号判断标志
		return -result;

	}
	if (num > 0)
	{
		for (int i = 1; i <= num; i++)
			result *= i;
		return result;
	}
}