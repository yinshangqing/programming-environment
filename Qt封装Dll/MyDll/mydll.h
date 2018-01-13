#ifndef MYDLL_H
#define MYDLL_H

#include "mydll_global.h"

#define TESTDLLSHARED_EXPORT __declspec(dllexport)
#ifdef TESTDLLSHARED_EXPORT
#else
#define TESTDLLSHARED_EXPORT __declspec(dllimport)
#endif

//下面我要定义4个普通函数：
TESTDLLSHARED_EXPORT void test1();

TESTDLLSHARED_EXPORT void test2(void);

TESTDLLSHARED_EXPORT void test3(int a);

TESTDLLSHARED_EXPORT void test4(int a,int b);

#endif // MYDLL_H
