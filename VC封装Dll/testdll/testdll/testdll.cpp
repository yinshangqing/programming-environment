// testdll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"

#include "testdll.h"
#include <iostream>
using namespace std;
int Add(int plus1, int plus2)
{
	int add_result = plus1 + plus2;
	return add_result;
}
int Sub(int plus1, int plus2)
{
	int sub_result = plus1 - plus2;
	return sub_result;
}