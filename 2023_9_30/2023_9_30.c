#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//1.模拟实现strcpy
//char* my_strcpy(char* tar, const char* base)
//{
//	char* ret = tar;
//	assert(tar && base);
//	while (*tar++ = *base++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hehe";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//也可以写printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


//2.模拟实现strcat
//char* my_strcat(char* tar, const char* base)
//{
//	char* ret = tar;
//	while (*tar != '\0')
//	{
//		tar++;
//	}
//	while (*tar++ = *base++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////3.模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = (char*)str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 =(char*) str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//
//
//}
//int main()
//{
//	char arr1[] = "abcdebcdf";
//	char arr2[] = "bcd";
//	char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了");
//	}
//}


//4.strtok
//#include<string.h>
//int main()
//{
//	char arr1[] = "192.zwp@com";
//	char buf[30] = { 0 };
//	strcpy(buf, arr1);
//	const char* p = "@.";
//	char* str = NULL;
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}

//5.strerror
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开失败，原因是: %s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//6.perror相当于printf+strerror,会自动在自定义内容后面加冒号，并打印错误信息
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("打开情况:");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//7.memcpy内存拷贝
//#include<string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);//单位字节
//	return 0;
//}


//8.模拟实现memcopy
//#include<assert.h>
//void* my_memcpy(void* tar, const void* base, size_t sz)
//{
//	assert(tar && base);
//	char* ret = (char*)tar;
//	while (sz--)
//	{
//		*(char*)tar = *(char*)base;
//		base = (char*)base + 1;
//		tar = (char*)tar + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);//单位字节
//	return 0;
//}


//9.memmove可以实现重叠拷贝，避免覆盖
//#include<string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	memmove(arr1+2 , arr1, 8);//单位字节
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//10.模拟实现memmove
//如果base在tar左边，从后往前拷贝，反之，从前往后拷贝
//void* my_memmove(void* tar, void* base, size_t num)
//{
//	assert(tar && base);
//	void* ret = tar;
//	if (tar < base)
//	{
//		*(char*)tar = *(char*)base;
//		base = (char*)base + 1;
//		tar = (char*)tar + 1;
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)tar + num) = *((char*)base + num);
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	my_memmove(arr1 + 2, arr1, 8);//单位字节
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


////11.memcmp内存比较
//#include<string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,6 };
//	int ret = memcmp(arr1, arr2, 16);
//	printf("%d\n", ret);
//	return 0;
//}


//12.memset
//#include<string.h>
//int main()
//{
//	//int arr[10] = { 0 };
//	//memset(arr, 1, sizeof(arr[0]));//以字节为单位设置,不能这样用
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);//即将前5个字节设置为‘x'
//	printf("%s\n", arr);
//	return 0;
//}


//13.结构体中自引用(用指针
//struct node
//{
//	int data;
//	struct node* next;
//};
//int main()
//{
//	struct node n1;
//	struct node n2;
//	n1.next = &n2;
//	return 0;
//}


//typedef可以重命名匿名结构体
//typedef struct
//{
//	int data;
//} s ;


