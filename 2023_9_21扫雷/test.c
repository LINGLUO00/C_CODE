#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*****   1.star   *****\n");
	printf("*****   0.exit   *****\n");
	printf("**********************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//display
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);

}

int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������:>\n");
			break;
		}

	} while (input);
	return 0;
}