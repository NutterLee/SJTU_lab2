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
double button_width = x_max() / 9.5;
double button_height = y_max() / 12.0;
double base_x = button_width / 2.7;
double base_y = button_height / 2.2;
mainWindow::mainWindow(Point xy, int w, int h, const string & title):Window(xy,w,h,title),
numOne(Point(base_x,base_y*4), button_width, button_height,"1",cb_numOne),
numTwo(Point(base_x*4, base_y * 4), button_width, button_height, "2", cb_numTwo),
numThree(Point(base_x*7, base_y * 4), button_width, button_height, "3", cb_numThree),
numAdd(Point(base_x*10, base_y * 4), button_width, button_height, "+", cb_numAdd),
leftBracket(Point(base_x*13, base_y * 4), button_width, button_height, "(", cb_leftBracket),
numFour(Point(base_x, base_y*7), button_width, button_height, "4", cb_numFour),
numFive(Point(base_x*4, base_y * 7), button_width, button_height, "5", cb_numFive),
numSix(Point(base_x*7, base_y * 7), button_width, button_height, "6", cb_numSix),
numDecrease(Point(base_x*10, base_y * 7), button_width, button_height, "-", cb_numDecrease),
rightBracket(Point(base_x*13, base_y * 7), button_width, button_height, ")", cb_rightBracket),
numSeven(Point(base_x, base_y * 10), button_width, button_height, "7", cb_numSeven),
numEight(Point(base_x*4, base_y * 10), button_width, button_height, "8", cb_numEight),
numNine(Point(base_x*7, base_y * 10), button_width, button_height, "9", cb_numNine),
numMultiply(Point(base_x*10, base_y * 10), button_width, button_height, "*", cb_numMultiply),
numDelete(Point(base_x*13, base_y * 10), button_width, button_height, "del", cb_numDelete),
numZero(Point(base_x, base_y * 13), button_width, button_height, "0", cb_numZero),
numPoint(Point(base_x*4, base_y * 13), button_width, button_height, ".", cb_numPoint),
numFactorial(Point(base_x*7, base_y * 13), button_width, button_height, "!", cb_numFactorial),
numDivide(Point(base_x*10, base_y * 13), button_width, button_height, "/", cb_numDivide),
numX(Point(base_x*13, base_y * 13), button_width, button_height, "x", cb_numX),
outputFlow(Point(base_x*2,base_y),base_x*3,button_height/1.2,"current:"),
outputResult(Point(base_x*6, base_y), base_x*3, button_height/1.2, "result:"),
numCalculate(Point(base_x*10,base_y), button_width/1.2, button_height/1.2,"Calculate",cb_calculate),
numDraw(Point(base_x*13,base_y), button_width/1.2, button_height/1.2,"Draw",cb_draw)
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
	//attach(baseAxisX);
	//baseAxisX.label.move(x_max() / 2 * 1.1, y_max() / 10 * 8);
	//attach(baseAxisX.label);
	//attach(baseAxisY);
	attach(numCalculate);
	attach(numX);
	attach(numDraw);
	//attach(line);
}

void mainWindow::cb_calculate(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberCalculate();
}

void mainWindow::cb_draw(Address, Address pw)
{
	reference_to<mainWindow>(pw).numberDraw();
}
/*
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

void mainWindow::cb_numX(Address, Address pw)
{
	reference_to<mainWindow>(pw).buttonNumX();
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
	numberShow();
}

void mainWindow::buttonNumOne()
{
	calculateFlow << 1;
	numberShow();
}

void mainWindow::buttonNumTwo()
{
	calculateFlow << 2;
	numberShow();
}

void mainWindow::buttonNumThree()
{
	calculateFlow << 3;
	numberShow();
}

void mainWindow::buttonNumFour()
{
	calculateFlow << 4;
	numberShow();
}

void mainWindow::buttonNumFive()
{
	calculateFlow << 5;
	numberShow();
}

void mainWindow::buttonNumSix()
{
	calculateFlow << 6;
	numberShow();
}

void mainWindow::buttonNumSeven()
{
	calculateFlow << 7;
	numberShow();
}

void mainWindow::buttonNumEight()
{
	calculateFlow << 8;
	numberShow();
}

void mainWindow::buttonNumNine()
{
	calculateFlow << 9;
	numberShow();
}

void mainWindow::buttonNumAdd()
{
	calculateFlow << '+';
	numberShow();
}

void mainWindow::buttonNumDecrease()
{
	calculateFlow << '-';
	numberShow();
}

void mainWindow::buttonNumMultiply()
{
	calculateFlow << '*';
	numberShow();
}

void mainWindow::buttonNumDivide()
{
	calculateFlow << '/';
	numberShow();
}

void mainWindow::buttonNumFactorial()
{
	calculateFlow << '!';
	numberShow();
}

void mainWindow::buttonNumPoint()
{
	calculateFlow << '.';
	numberShow();
}

void mainWindow::buttonLeftBracket()
{
	calculateFlow << '(';
	numberShow();
}

void mainWindow::buttonRightBracket()
{
	calculateFlow << ')';
	numberShow();
}

void mainWindow::buttonNumX()
{
	calculateFlow << 'x';
	numberShow();
}

void mainWindow::buttonNumDelete() 
{
	string tmp;
	tmp = calculateFlow.str();
	auto pos = tmp.end()-1;//end指向的是string后面的哨兵位置
	tmp.erase(pos);
	calculateFlow.str("");
	calculateFlow << tmp;
	numberShow();
}

void mainWindow::numberCalculate()
{
	try {
		calculateFlow << ";";
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
		final_result = tmp;
		stringstream tmpFlow;
		tmpFlow << tmp;
		outputResult.put(tmpFlow.str());
		//cout << "=" << tmp << endl;//注： cout要改成向out_box输出的一个东西

		if (saveResult == true)
		{
			preResult = tmp;
			saveResult = false;
		}
		ts.reset();
		calculateFlow.str("");//清空stringstream
	}//将错误输出到输出框
	catch (divByZero) { outputResult.put("divided by zero"); calculateFlow.str("");	}
	catch (missRightPart) { outputResult.put( "')' expected" ); calculateFlow.str(""); }
	catch (priExp) { outputResult.put("primary expected"); calculateFlow.str("");	}
	catch (bufferFull) { outputResult.put("putback() into a full buffer"); calculateFlow.str(""); }
	catch (badToken) { outputResult.put("Bad token"); calculateFlow.str(""); }
	catch (posNumExp) {outputResult.put( "a positive number required" ); calculateFlow.str("");	}
	catch (intRequired) { outputResult.put("an interger required" ); calculateFlow.str("");	}
	catch (...) { outputResult.put( "unexpected error" ); calculateFlow.str("");	}
}

void mainWindow::numberDraw()
{
	Window draw_win(600,400, "garph");
	string true_flow = calculateFlow.str();
	Open_polyline line; //线的位置要重新考虑过，最好是一个try失败了 那就换一条线，因为try能失败肯定是某些点恰好不在定义域上
	calculateFlow.str("");
	bool is_continus = true;
	double x = -280;
	while (x < 280)
	{
		try 
		{
			stringstream tmp_flow;
			string tmp_string;		
			for (auto word : true_flow)
			{
				if (word == 'x')tmp_flow << x;
				else tmp_flow << word;
			}
			x += 0.1;
			tmp_string = tmp_flow.str();
			 calculateFlow<<tmp_string;
			 numberCalculate();
			 outputResult.put("");
			 double  y = final_result;
			 line.add(Point(x+300, -y+200));
			
		}
		catch (divByZero) { calculateFlow.str(""); is_continus = false; }
		catch (...) { return; }
	}
	draw_win.attach(line);
	gui_main();
	return;
}

void mainWindow::numberShow()
{
	outputFlow.put(calculateFlow.str());	
}
