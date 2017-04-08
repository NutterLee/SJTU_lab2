//窗口主体程序
#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"

using namespace Graph_lib;
/*
class Window :public Fl_Window
{
public:
	Window(int w, int h, const string& title);
	Window(Point xy, int w, int h, const string&title);

	virtual ~Window(){}

	int x_max() const { return w; }
	int y_max() const { return h; }

	void resize(int ww, int hh) { w = ww, h = hh; size(ww, hh); }

	void set_label(const string&) { shapes.push_back(&s); }
	void attach(Widget&);

	void detach(Shape& s);
	void detach(Widget& w);

	void put_on_top(Shape& p);

protected:
	void draw();

private:
	vector<Shape*>shapes;
	int w, h;

	void init();
};
*/
struct mainWindow:Window
{
	mainWindow(Point xy, int w, int h, const string& title);
private:

	//计算
	Button calculate;
	//输入框与输出框
	In_box input;
	Out_box output;


};