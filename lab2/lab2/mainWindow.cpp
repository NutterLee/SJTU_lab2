//�����������
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

	//���㡢��ͼ,Ϊ�˼����⣬���滭��������
	Button numCalculate;
	Button numDraw;

	//������������
	In_box inputBox;
	Out_box outputBox;

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
	Button multiply;
	Button divide;
	Button add;
	Button decrease;
	Button factorial;

	//M R���
	Button numM;
	Button numR;

	//ɾ����ť
	Button numDelete;

	//��������ϵ
	Axis baseAxis;

	//�ص�����
	static void cb_calculate(Address, Address);//������
	static void cb_draw(Address, Address);//��ͼ
	static void cb_show(Address, Address);//ÿ����һ���ַ�Ҫ���������ʾ

};