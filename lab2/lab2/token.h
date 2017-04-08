#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//字符对应关系
const char number = '8';
const char quit = 'q';
const char print = ';';


//存储答案
extern double preResult ;

//存储开启的flag，默认false
extern bool saveResult;

//(-2)与-2的区分flag,默认true
 extern bool isNegtive  ;

//错误抛出class
class divByZero {};
class missRightPart {};
class priExp {};
class bufferFull {};
class badToken {};
class posNumExp {};//阶乘不应有负数
class intRequired {};//阶乘不处理浮点数

//语法实现函数
double expression();
double term();
double primary();


//阶乘计算函数，负数会抛出错误
int multi(int num);

class Token
{
public:
	char kind;
	double value;
	string name;
	Token(char ch) :kind(ch), value(0) {}
	Token(char ch, double val) :kind(ch), value(val) {}
	Token(char ch, string n) :kind(ch), name(n) {}
};
class Token_stream {
public:
	Token_stream();
	Token get();
	void putback(Token t);
	void reset(); //重置ts

private:
	bool full;
	Token buffer;
};

extern Token_stream ts;//输入流


