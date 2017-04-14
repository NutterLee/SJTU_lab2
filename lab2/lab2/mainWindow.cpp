//窗口主体程序
#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
#include"mainWindow.h"
using namespace Graph_lib;
stringstream calculateFlow;

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
outputFlow(Point(1.5*x_max()/20,y_max()/10),y_max()/4,x_max()/20,"current:"),
outputResult(Point(2*x_max() / 4, y_max() / 10), y_max() / 4, x_max() / 20, "result:"),
baseAxisX(Axis::x,Point(x_max()/2*1.1,y_max()/10*8),x_max()/3,0,"x"),
baseAxisY(Axis::y, Point(x_max() /2*1.1, y_max() / 10 * 8), x_max() /3,0, "y")
//,
//numCalculate(Point(x_max()*16/20,y_max()/10*1),x_max()/20,y_max()/10,"Calculate",cb_calculate),
//numDraw(Point(x_max()*18/20,y_max()/10*1),x_max()/20,y_max()/10,"Draw",cb_draw)*/
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
	attach(outputFlow);
	attach(outputResult);
	attach(baseAxisX);
	attach(baseAxisY);
}

void mainWindow::cb_calculate(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberCalculate();
}
/*
void mainWindow::cb_draw(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberDraw();
}

void mainWindow::cb_show(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberShow();
}
*/

void mainWindow::cb_numZero(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumZero();
}

void mainWindow::cb_numOne(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumOne();
}

void mainWindow::cb_numTwo(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumTwo();
}

void mainWindow::cb_numThree(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumThree();
}

void mainWindow::cb_numFour(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumFour();
}

void mainWindow::cb_numFive(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumFive();
}

void mainWindow::cb_numSix(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumSix();
}

void mainWindow::cb_numSeven(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumSeven();
}

void mainWindow::cb_numEight(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumEight();
}

void mainWindow::cb_numNine(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumNine();
}

void mainWindow::cb_numAdd(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumAdd();
}

void mainWindow::cb_numDecrease(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumDecrease();
}

void mainWindow::cb_numMultiply(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumMultiply();
}

void mainWindow::cb_numDivide(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumDivide();
}

void mainWindow::cb_numFactorial(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumFactorial();
}

void mainWindow::cb_numPoint(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumPoint();
}

void mainWindow::cb_leftBracket(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonLeftBracket();
}

void mainWindow::cb_rightBracket(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonRightBracket();
}

void mainWindow::cb_numDelete(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumDelete();
}

void mainWindow::buttonNumZero()
{
	calculateFlow << 0;
}

void mainWindow::buttonNumOne()
{
	calculateFlow << 1;
}

void mainWindow::buttonNumTwo()
{
	calculateFlow << 2;
}

void mainWindow::buttonNumThree()
{
	calculateFlow << 3;
}

void mainWindow::buttonNumFour()
{
	calculateFlow << 4;
}

void mainWindow::buttonNumFive()
{
	calculateFlow << 5;
}

void mainWindow::buttonNumSix()
{
	calculateFlow << 6;
}

void mainWindow::buttonNumSeven()
{
	calculateFlow << 7;
}

void mainWindow::buttonNumEight()
{
	calculateFlow << 8;
}

void mainWindow::buttonNumNine()
{
	calculateFlow << 9;
}

void mainWindow::buttonNumAdd()
{
	calculateFlow << '+';
}

void mainWindow::buttonNumDecrease()
{
	calculateFlow << '-';
}

void mainWindow::buttonNumMultiply()
{
	calculateFlow << '*';
}

void mainWindow::buttonNumDivide()
{
	calculateFlow << '/';
}

void mainWindow::buttonNumFactorial()
{
	calculateFlow << '!';
}

void mainWindow::buttonNumPoint()
{
	calculateFlow << '.';
}

void mainWindow::buttonLeftBracket()
{
	calculateFlow << '(';
}

void mainWindow::buttonRightBracket()
{
	calculateFlow << ')';
} 

void mainWindow::buttonNumDelete()
{
	string tmp;
	calculateFlow >> tmp;
	auto pos = tmp.end()-1;//end指向的是string后面的哨兵位置
	tmp.erase(pos);
	calculateFlow << tmp;
}

void mainWindow::numberCalculate()
{
	try {
		Token t = ts.get();
		//while (t.kind == ';' || t.kind == '\r')t = ts.get();//忽略；回车
	/*	if (t.kind == 'q')
		{
			system("pause");
			return 0;
		}
		*/ //只会输入数字和运算符号
		ts.putback(t);
		double tmp = expression();
		cout << "=" << tmp << endl;//注： cout要改成向out_box输出的一个东西

		if (saveResult == true)
		{
			preResult = tmp;
			saveResult = false;
		}
		ts.reset();
	}//有机会把错误处理函数的cerr改成向out_box的输出
	catch (divByZero) { cerr << "divided by zero" << endl; }
	catch (missRightPart) { cerr << "')' expected" << endl; }
	catch (priExp) { cerr << "primary expected" << endl; }
	catch (bufferFull) { cerr << "putback() into a full buffer" << endl; }
	catch (badToken) { cerr << "Bad token" << endl; }
	catch (posNumExp) { cerr << "a positive number required for factorial" << endl; }
	catch (intRequired) { cerr << "an interger required for your calculation" << endl; }
	catch (...) { cerr << "unexpected error" << endl; }
}
