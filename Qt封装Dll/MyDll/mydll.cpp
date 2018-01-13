#include "mydll.h"
#include <iostream>

//记得加上上面的头文件
//记得加上iostream头文件，不然cout不能用

void test1()
{
    std::cout<<"test1"<<std::endl;
}

void test2(void)
{
    std::cout<<"test2"<<std::endl;
}

void test3(int a)
{
    std::cout<<"test3: " << a <<std::endl;
}

void test4(int a,int b)
{
    std::cout<<"test4"<< a << b << std::endl;
}
