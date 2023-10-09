#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void Teststack1()
{
	ST st;
	STInit(&st);
	STPush(&st,1);
	STPush(&st, 2);
	STPush(&st, 3);
	printf("%d", STTop(&st));
	STPop(&st);
	

	STPush(&st, 4);
	STPush(&st, 5);
	while (!STEmpty(&st))
	{
		printf("%d", STTop(&st));
		STPop(&st);
	}
	STDestroy(&st);

}
int main()
{
	Teststack1();
	return 0;
}