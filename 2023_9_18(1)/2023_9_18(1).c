#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,5,4,10,6,9,7,8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//2.汉诺塔问题
//步骤1：把n-1个模块从A移到B
//步骤2：把第n个模块从A移到C
//步骤3：把n-1个模块从B移到C
//void move(char pos_1, char pos_2)
//{
//	printf(" %c->%c ", pos_1, pos_2);
//}
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int pos1 = 'A';
//	int pos2 = 'B';
//	int pos3 = 'C';
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n,pos1, pos2, pos3);
//	return 0;
//}









