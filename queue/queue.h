#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;

}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);