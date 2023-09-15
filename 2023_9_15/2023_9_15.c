#define _CRT_SECURE_NO_WARNINGS 1
////1.goto语句的使用
//#include<string.h>
#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请输入我是猪，否则你的电脑将在60秒后关机\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		printf("取消关机\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//2.用函数实现二分查找
//int search(int arr[10], int k, int sz, int* num)
//{
//	int left = 0;
//	int right = sz-1;
//	int mid = (right - left) / 2 + left;
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//			mid = (right - left) / 2 + left;
//		}
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//			mid = (right - left) / 2 + left;
//		}
//		if (k == arr[mid])
//		{
//			*num = mid;
//			return 1;
//			break;
//		}
//		
//		
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int num = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, k, sz, &num);
//	if (ret == 1)
//	{
//		printf("找到了，下标是：%d",num);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}


