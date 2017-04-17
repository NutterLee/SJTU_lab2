#include"token.h"
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
#include"mainWindow.h"

//头文件里不能定义全局变量（除了const），所以全部转移到这里

Token_stream ts;//输入流

//存储答案
double preResult = 0;

//存储开启的flag，默认false
bool saveResult = false;

//(-2)与-2的区分flag,默认true
bool isNegtive = true;