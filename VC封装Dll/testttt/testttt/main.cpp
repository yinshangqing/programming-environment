#include "testdll.h"
#include <iostream>
#include <stdio.h>
#pragma comment(lib,"testdll");

int main()
{
	int a = 10;
	int b = 77;
	int c = Add(a,b);
	int d = Sub(a,b);
	printf("c: %d\n",c);
	printf("d: %d\n",d);
	return 0;
}
