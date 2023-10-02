#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = (int*)((int)arr + 4);
//	printf("%x\n", *p);
//	return 0;
//}


//1.用联合体判断大小端
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	u.i = 1;
//	if (u.c == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//}


//2.void* malloc (size_t num)参数意为num个字节
//int main()
//{
//	int* p = (int*)malloc(20);//malloc返回值为void*
//	if (p == NULL)
//	{
//		perror("文件打开失败");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);//要释放哪个空间，就把首地址传给free
//	p = NULL;//free不会置空,手动置空，以防止成为野指针的p被使用
//
//
//
//	return 0;
//}


//3.void* calloc (size_t num,size_t size)参数意为num个size,与malloc不同在开辟的空间会被初始化为0
//int main()
//{
//	int i = 0;
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc()");
//		return 1;
//	}	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//}


//4.void* realloc(void* ptr,size_t size)
int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		perror("malloc()");
		return 1;
	}	
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;
	}
	int* ptr = (int*)realloc(p, 40);//用临时指针接收，防止开辟失败，原来的指针也丢失
	if (ptr != NULL)
	{
		p = ptr;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i + 1;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	else
	{
		perror("realloc");
		return 1;
	}
	//释放
	free(p);
	p = NULL;
	return 0;
}


