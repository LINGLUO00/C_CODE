#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
//≥ı ºªØ∆Â≈Ã
void Initboard(char board[ROWS][COLS], int rows, int cols,char set);
//¥Ú”°∆Â≈Ã
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//≤º÷√¿◊
void SetMine(char mine [ROWS][COLS], int row, int col);
//≈≈≤È¿◊
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);