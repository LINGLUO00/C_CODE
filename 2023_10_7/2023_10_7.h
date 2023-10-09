#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* LTInit();
void LTPushBack(LTNode*phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);
LTNode* LTFind(LTNode* phead,LTDataType x);
void LTPrint(LTNode* phead);
void LTDestroy(LTNode* phead);
void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);
