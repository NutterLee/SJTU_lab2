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

extern stringstream calculateFlow; //����ʱ�����㺯���õ���������ÿ��button��������������������޸�
struct mainWindow :Window
{
	mainWindow(Point xy, int w, int h, const string& title);
private:

	//���㡢��ͼ,Ϊ�˼����⣬���滭��������
//	Button numCalculate;
	//Button numDraw;

	//������������
	//	In_box inputBox;
	//	Out_box outputBox;

	//���ְ�ť
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

	//С����
	Button numPoint;

	//()��ť
	Button leftBracket;
	Button rightBracket;

	//�����
	Button numMultiply;
	Button numDivide;
	Button numAdd;
	Button numDecrease;
	Button numFactorial;

	//ɾ����ť
	Button numDelete;

	//��������ϵ
	//	Axis baseAxis;
	/*
	//�ص�����
	static void cb_calculate(Address, Address);//������
	static void cb_draw(Address, Address);//��ͼ
	static void cb_show(Address, Address);//ÿ����һ���ַ�Ҫ���������ʾ
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

	//���ص���������ĺ���
	//void numberCalculate();//�����ͷ���ֵ����Ҫ�ģ�������
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
