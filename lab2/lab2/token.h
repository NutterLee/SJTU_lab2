#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//�ַ���Ӧ��ϵ
const char number = '8';
const char quit = 'q';
const char print = ';';


//�洢��
extern double preResult ;

//�洢������flag��Ĭ��false
extern bool saveResult;

//(-2)��-2������flag,Ĭ��true
 extern bool isNegtive  ;

//�����׳�class
class divByZero {};
class missRightPart {};
class priExp {};
class bufferFull {};
class badToken {};
class posNumExp {};//�׳˲�Ӧ�и���
class intRequired {};//�׳˲���������

//�﷨ʵ�ֺ���
double expression();
double term();
double primary();


//�׳˼��㺯�����������׳�����
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
	void reset(); //����ts

private:
	bool full;
	Token buffer;
};

extern Token_stream ts;//������


