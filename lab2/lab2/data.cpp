#include"token.h"
#include"Graph.h"
#include"GUI.h"
#include"Point.h"
#include"token.h"
#include"Window.h"
#include"mainWindow.h"

//ͷ�ļ��ﲻ�ܶ���ȫ�ֱ���������const��������ȫ��ת�Ƶ�����

Token_stream ts;//������

//�洢��
double preResult = 0;

//�洢������flag��Ĭ��false
bool saveResult = false;

//(-2)��-2������flag,Ĭ��true
bool isNegtive = true;