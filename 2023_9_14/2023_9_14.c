#define _CRT_SECURE_NO_WARNINGS 1
//1.最高分与最低分之差
#include <stdio.h>
//int main()
//{
//    int MAX = 0;
//    int MIN = 100;
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int m = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        if (m < MIN)
//        {
//            MIN = m;
//        }
//        if (m > MAX)
//        {
//            MAX = m;
//        }
//    }
//    printf("%d", MAX - MIN);
//
//    return 0;
//}

//2.打印100以内3的倍数的数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//3.将三个整数数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a=b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//4.打印100~200之间的素数(一个能够分解的数字i，一定有一个因数小于等于sqrt(i),所以不用2-i,直接2-sqrt(i),就能找到其中一个因数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;  i <= 200; i++)
//	{
//		int flag = 1;
//		//判断：拿2到i-1的数字去试除i
//		int j = 0;
//		for (j = 2; j < i ; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//			
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//用函数写一遍


//5.打印1000年到2000年之间的闰年
//int is_year(int y)
//{
//
//	return ((y % 4 == 0 && y % 100 != 0) || (y & 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//
//	}
//	printf("\n%d\n", count);
//	return 0;
//}