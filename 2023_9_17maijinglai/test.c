#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "add.h"
#pragma comment(lib,"2023_9_17lib.lib")
int main()
{
	int a = 20;
	int b = 30;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}