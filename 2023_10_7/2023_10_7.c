#define _CRT_SECURE_NO_WARNINGS 1
#include "2023_10_7.h"
LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode ==NULL)
	{
		perror("newhead fail");
		return NULL;
	}
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	//这里加个count++，可以用来记数
	return newnode;
}
LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(-1);//随便传个值，也可以用来计算链节
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;//不是phead,phead是哨兵位
	printf("guard<==>");
	while (cur != phead)
	{
		printf("%d<==>", cur->data);
		cur = cur->next;

	}
	printf("\n");
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	LTNode* tail = phead->prev;//是phead->prev，不是phead,只有第一次是phead,所以不能怎么写
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;


}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	LTNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
	
}


void LTPopFront(LTNode* phead)
{
	assert(phead);
	LTNode* newhead = phead->next->next;
	LTNode* freehead = phead->next;
	newhead->prev = phead;
	phead->next = newhead;
	free(freehead);
}


LTNode* LTFind(LTNode* phead, LTDataType x)
{
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if ((cur->data) != x)
		{
			cur = cur->next;
			
		}
		else
		{
			return cur;
		}
	}
	return NULL;

}



void LTInsert(LTNode* pos, LTDataType x)
{
	LTNode* newnode = BuyLTNode(x);
	LTNode* prevpos = pos->prev;
	pos->prev = newnode;
	newnode->next = pos;
	prevpos->next = newnode;
	newnode->prev = prevpos;

}


void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}


void LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* posprev = pos->prev;
	LTNode* posafter = pos->next;
	posprev->next = posafter;
	posafter->prev = posprev;
	free(pos);
}