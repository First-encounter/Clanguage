#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { '0' };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		{
			if (ret != 'C')
				break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		{
			if (ret != 'C')
				break;
		}
	}

		if (ret == '*')
		{
			printf("玩家赢！\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢！\n");
		}
		else
			printf("平局！\n");
	
}
void menu()
{
	printf("***********************\n");
	printf("*****   1.play   ******\n");
	printf("*****   0.exit   ******\n");
	printf("***********************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
	printf("请输入:>");
	scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入非法，请重新输入。\n");
			break;
		}

	} while (input);
	return 0;
}