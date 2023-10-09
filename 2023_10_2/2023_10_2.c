#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在文件中写入26个字母(用w的话，没文件会创建，有文件会销毁重新创建
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\LINGLUO\\Desktop\\text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//读文件
int main()
{
	FILE* pf = fopen("C:\\Users\\LINGLUO\\Desktop\\text.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ch = 0;
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		ch = fgetc(pf);
		printf("%c ",ch);
	}
	
	fclose(pf);
	pf = NULL;
	return 0;
}