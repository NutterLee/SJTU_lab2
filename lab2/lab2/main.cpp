#include<iostream>
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
#include"mainWindow.h"
using namespace std;
using namespace Graph_lib;


int main()
{
	mainWindow win(Point(100, 100), 1000, 600, "Calculator");
	return gui_main();
}