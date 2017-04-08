//窗口主体程序
#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
using namespace Graph_lib;

struct mainWindow:Window
{
	mainWindow(Point xy, int w, int h, const string& title);
private:

	//计算、绘图,为了简化问题，将绘画与计算分离
	Button numCalculate;
	Button numDraw;

	//输入框与输出框
	In_box inputBox;
	Out_box outputBox;

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
	Button multiply;
	Button divide;
	Button add;
	Button decrease;
	Button factorial;

	//M R标记
	Button numM;
	Button numR;

	//删除按钮
	Button numDelete;

	//基础坐标系
	Axis baseAxis;

	//回调函数
	static void cb_calculate(Address, Address);//计算结果
	static void cb_draw(Address, Address);//绘图
	static void cb_show(Address, Address);//每输入一个字符要在输入框显示

};