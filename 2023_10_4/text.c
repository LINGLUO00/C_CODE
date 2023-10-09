
#include "SList.h"
void TestList1()
{
	SLTNode* plist = NULL;
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);


	SLTPrint(plist);

	SLPushBack(&plist, 4);
	SLPushBack(&plist, 5);
	SLTPrint(plist);

	//SLPopBack(&plist);
	//SLPopBack(&plist);

	//SLTPrint(plist);

	//SLPopFront(&plist);
	//SLTPrint(plist);
	 
	 
	
	//查找后修改
	SLTNode* pos = SLTFind(plist,1);
	//pos->data = 30;
	//SLTPrint(plist);

	//在任意位置插入
	SLInsert(&plist,pos, 8);//pos前
	SLInsertAfter(&plist, pos, 8);//pos后;
	SLTPrint(plist);

	//删除pos位置的值



	//删除pos位置后面的值
}

int main()
{
	TestList1();
	return 0;
}