#pragma once
#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include<sstream>
#include"Window.h"
using namespace Graph_lib;
using namespace std;

extern stringstream calculateFlow; //计算时给计算函数用的输入流，每个button就是在这个输入流里面修改
struct mainWindow :Window
{
	mainWindow(Point xy, int w, int h, const string& title);
private:

	//计算、绘图,为了简化问题，将绘画与计算分离
//	Button numCalculate;
	//Button numDraw;

	//输入框与输出框
	//	In_box inputBox;
	//	Out_box outputBox;

	//数字按钮
	Button numZero;
	Button numOne;
	Button numTwo;
	Button numThree;
	Button numFour;
	Button numFive;
	Button numSix;
	Button numSeven;
	Button numEight;
	Button numNine;

	//小数点
	Button numPoint;

	//()按钮
	Button leftBracket;
	Button rightBracket;

	//运算符
	Button numMultiply;
	Button numDivide;
	Button numAdd;
	Button numDecrease;
	Button numFactorial;

	//删除按钮
	Button numDelete;

	//基础坐标系
	//	Axis baseAxis;
	/*
	//回调函数
	static void cb_calculate(Address, Address);//计算结果
	static void cb_draw(Address, Address);//绘图
	static void cb_show(Address, Address);//每输入一个字符要在输入框显示
	*/
	static void cb_numZero(Address, Address);
	static void cb_numOne(Address, Address);
	static void cb_numTwo(Address, Address);
	static void cb_numThree(Address, Address);
	static void cb_numFour(Address, Address);
	static void cb_numFive(Address, Address);
	static void cb_numSix(Address, Address);
	static void cb_numSeven(Address, Address);
	static void cb_numEight(Address, Address);
	static void cb_numNine(Address, Address);
	static void cb_numAdd(Address, Address);
	static void cb_numDecrease(Address, Address);
	static void cb_numMultiply(Address, Address);
	static void cb_numDivide(Address, Address);
	static void cb_numFactorial(Address, Address);

	static void cb_numPoint(Address, Address);

	static void cb_leftBracket(Address, Address);
	static void cb_rightBracket(Address, Address);

	static void cb_numDelete(Address, Address);

	//被回调函数唤起的函数
	//void numberCalculate();//参数和返回值可能要改，先留意
	//void numberDraw();
	//void numberShow();
	
	void buttonNumZero();
	void buttonNumOne();
	void buttonNumTwo();
	void buttonNumThree();
	void buttonNumFour();
	void buttonNumFive();
	void buttonNumSix();
	void buttonNumSeven();
	void buttonNumEight();
	void buttonNumNine();
	void buttonNumAdd();
	void buttonNumDecrease();
	void buttonNumMultiply();
	void buttonNumDivide();
	void buttonNumFactorial();
	void buttonNumPoint();
	void buttonLeftBracket();
	void buttonRightBracket();
	void buttonNumDelete();

};
