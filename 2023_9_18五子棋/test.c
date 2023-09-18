#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("********1.star********\n");
	printf("********0.exit********\n");
	printf("**********************\n");
}
void game()
{
	//存放数据需要一个二维数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//显示棋盘
	Displayboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		//打印棋盘
		Displayboard(board, ROW, COL);
		// 判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		//打印棋盘
		Displayboard(board, ROW, COL);
		// 判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("你赢了\n");
	}
	else if ('#' == ret)
	{
		printf("你输了\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，重新选择:>");
			break;

		}
	} while (input);
	return 0;
}