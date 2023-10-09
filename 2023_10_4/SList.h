#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int Datatype;
typedef struct SListNode
{
	Datatype data;
	struct SListNode* next;
}SLTNode;

void SLPushFront(SLTNode**pphead, Datatype x);
void SLTPrint(SLTNode* phead);
void SLPushBack(SLTNode* phead, Datatype x);
void SLPopFront(SLTNode** plist);
void SLPopBack(SLTNode** plist);
SLTNode* SLTFind(SLTNode* phead, Datatype x);
void SLInsert(SLTNode** plist, SLTNode* pos, Datatype x);
void SLInsertAfter(SLTNode** plist, SLTNode* pos, Datatype x);
