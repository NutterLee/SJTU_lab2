//窗口主体程序
#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
#include"mainWindow.h"
using namespace Graph_lib;


mainWindow::mainWindow(Point xy, int w, int h, const string & title):Window(xy,w,h,title),
numOne(Point(x_max()*1/20.,y_max()/10*3),x_max()/20,y_max()/10,"1",cb_numOne),
numTwo(Point(x_max()*3/20,y_max()/10*3), x_max() / 20, y_max() / 10, "2", cb_numTwo),
numThree(Point(x_max() * 5 / 20, y_max() / 10 * 3), x_max() / 20, y_max() / 10, "3", cb_numThree),
numAdd(Point(x_max()*7/20,y_max()/10*3), x_max() / 20, y_max() / 10, "+", cb_numAdd),
leftBracket(Point(x_max() * 9 / 20, y_max() / 10 * 3), x_max() / 20, y_max() / 10, "(", cb_leftBracket),
numFour(Point(x_max() * 1 / 20, y_max() / 10 * 5), x_max() / 20, y_max() / 10, "4", cb_numFour),
numFive(Point(x_max() * 3 / 20, y_max() / 10 * 5), x_max() / 20, y_max() / 10, "5", cb_numFive),
numSix(Point(x_max() * 5 / 20, y_max() / 10 *5), x_max() / 20, y_max() / 10, "6", cb_numSix),
numDecrease(Point(x_max() * 7/ 20, y_max() / 10 * 5), x_max() / 20, y_max() / 10, "-", cb_numDecrease),
rightBracket(Point(x_max() * 9 / 20, y_max() / 10 * 5), x_max() / 20, y_max() / 10, ")", cb_rightBracket),
numSeven(Point(x_max() * 1/ 20, y_max() / 10 * 7), x_max() / 20, y_max() / 10, "7", cb_numSeven),
numEight(Point(x_max() * 3 / 20, y_max() / 10 *7), x_max() / 20, y_max() / 10, "8", cb_numEight),
numNine(Point(x_max() * 5 / 20, y_max() / 10 * 7), x_max() / 20, y_max() / 10, "9", cb_numNine),
numMultiply(Point(x_max() * 7/ 20, y_max() / 10 * 7), x_max() / 20, y_max() / 10, "*", cb_numMultiply),
numDelete(Point(x_max() * 9 / 20, y_max() / 10 * 7), x_max() / 20, y_max() / 10, "del", cb_numDelete),
numZero(Point(x_max() * 1 / 20, y_max() / 10 * 9), x_max() / 20, y_max() / 10, "0", cb_numZero),
numPoint(Point(x_max() * 3 / 20, y_max() / 10 * 9), x_max() / 20, y_max() / 10, ".", cb_numPoint),
numFactorial(Point(x_max() * 5 / 20, y_max() / 10 * 9), x_max() / 20, y_max() / 10, "!", cb_numFactorial),
numDivide(Point(x_max() * 7/ 20, y_max() / 10 * 9), x_max() / 20, y_max() / 10, "/", cb_numDivide),
numCalculate(Point(x_max()*16/20,y_max()/10*1),x_max()/20,y_max()/10,"Calculate",cb_calculate),
numDraw(Point(x_max()*18/20,y_max()/10*1),x_max()/20,y_max()/10,"Draw",cb_draw)
{
	attach(numZero);
	attach(numOne);
	attach(numTwo);
	attach(numThree);
	attach(numFour);
	attach(numFive);
	attach(numSix);
	attach(numSeven);
	attach(numEight);
	attach(numNine);
	attach(numPoint);
	attach(numAdd);
	attach(numDecrease);
	attach(numDivide);
	attach(numMultiply);
	attach(numFactorial);
	attach(leftBracket);
	attach(rightBracket);
	attach(numDelete);


}

void mainWindow::cb_calculate(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberCalculate();
}

void mainWindow::cb_draw(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberDraw();
}

void mainWindow::cb_show(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberShow();
}