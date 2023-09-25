#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//3.青蛙跳台阶(就是斐波那契类似问题
int jump(int n)
{
	int num1 = 1;
	int num2 = 2;
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		int ans = 0;
		while (n >= 3)
		{
			ans = num1 + num2;
			num1 = num2;
			num2 = ans;
			n--;
		}
		return ans;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = jump(n);
	printf("%d", ret);
	return 0;
}