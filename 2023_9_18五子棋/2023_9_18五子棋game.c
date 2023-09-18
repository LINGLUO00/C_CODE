#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘的方法1
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//初始化棋盘的方法2
//void Initboard(char board[ROW][COL], int row, int col)
//{
//	memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));
//}

//打印棋盘(不行,列被固定死了
//void Displayboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}
 

//打印棋盘(行,改宏可以改行和列
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}


//玩家下棋
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家下棋\n");
	

	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入:>");
			}
		}
		else
		{
			printf("输入非法，请重新输入:>\n");
		}
	}
}

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


//判断输赢
//玩家赢-*
//电脑赢-#
//平局-Q
int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < row; j++)
	{
		for (i = 0; i < col; i++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
}
//继续-C
int Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (Isfull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}