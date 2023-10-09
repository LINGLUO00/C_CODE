#define _CRT_SECURE_NO_WARNINGS 1
#include "2023_10_7.h"
void TestList()
{
	LTNode* plist = LTInit();
	LTPushBack(plist,1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);

	LTPushFront(plist, 5);
	LTPushFront(plist, 6);
	LTPushFront(plist, 7);
	LTPushFront(plist, 8);
	LTPrint(plist);


	LTPopBack(plist);
	LTPopFront(plist);
	LTPrint(plist);

	LTNode * pos = LTFind(plist, 3);
	if (pos)
	{
		LTInsert(pos, 30);
	}
	LTPrint(plist);

	LTErase(pos);
	LTPrint(plist);
	LTDestroy(plist);
	plist = NULL;


}

int main()
{
	TestList();
	return 0;
}