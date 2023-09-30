#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.计算器
//法一：回调函数
void menu()
{
	printf("**1.加法 2.减法**\n");
	printf("**3.乘法 4.除法**\n"); 
	printf("*****0.exit*****\n"); 

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;

}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &x, &y);
//	ret = (*pf)(x, y);
//	printf("%d\n", ret);
//
//
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入:>\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//方法二
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		printf("请输入两个数:>");
//		scanf("%d %d", &x, &y);
//		ret = pfarr[input](x, y);
//		printf("%d\n", ret);
//	} while (input);
//	return 0;
//}




//2.qsort的使用
//排序int类型
#include<stdlib.h>
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;//要排倒叙，只要写为p2-p1就好
//}
//void print_arr(int arr[], int num)
//{
//	int i = 0;
//	for (i = 0; i < num ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, num, sizeof(arr[0]), cmp_int);
//	print_arr(arr, num);
//	return 0;
//}




//排序结构体
//#include<string.h>
//struct student
//{
//	char name[20];
//	int age;
//};
//int cmp_age(const void* p1,const void *p2)
//{
//	return ((struct student*)p1)->age - ((struct student*)p2)->age;
//}
//int cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct student*)p1)->name, ((struct student*)p2)->name);
//}
//int main()
//{
//	struct student s[] = {{"z",30},{"l",25},{"w",50}};
//	int num = sizeof(s) / sizeof(s[0]);
//	qsort(s, num, sizeof(s[0]), cmp_age);
//	qsort(s, num, sizeof(s[0]), cmp_name);
//	return 0;
//}



//3.模拟qsort（用冒泡暂时
//void swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;//要排倒叙，只要写为p2-p1就好
//}
//bubble_sort(void* base,size_t num,size_t width,int(*cmp)(const void* p1,const void* p2))
//{
//	size_t i = 0;
// 
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag=1;
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width , (char*)base + (j+1) * width) >0)
//			{
//				flag=0;
//				swap((char*)base + j * width, (char*)base + (j + 1) * width , width);
//			}
//		}
//		if(flag==1)
//		{
//			break;
//		}
//		
//	}
//}
//void print_arr(int arr[], int num)
//{
//	int i = 0;
//	for (i = 0; i < num ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, num, sizeof(arr[0]), cmp_int);
//	print_arr(arr, num);
//	
//	return 0;
//}


