#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct stack
{
	STDataType* a;
	int top;

	int capacity;
}ST;

void STInit(ST* pst);
void STPush(ST* pst, STDataType x);
void STPop(ST* pst);
STDataType STTop(ST* pst);
void STDestroy(ST* pst);