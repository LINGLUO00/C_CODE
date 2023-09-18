#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
//包含所需头文件
#include <string.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//函数声明
void Initboard(char board[ROW][COL], int row ,int col);
//打印棋盘
void Displayboard(char board[ROW][COL], int row , int col);
//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//判断输赢
int Iswin(char board[ROW][COL], int row, int col);