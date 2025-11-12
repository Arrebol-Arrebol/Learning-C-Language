#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void meun()
{
	printf("*******************************\n");
	printf("**********1.0 Play*************\n");
	printf("**********0.0 Exit*************\n");
	printf("*******************************\n");

}
void game()
{
	char mine[ROWS][COLS];
	//存放布置好的雷
	char show[ROWS][COLS];
	//存放排查出雷的信息
	InitBoard(mine, ROWS, COLS, '0');
	//默认mine数组全部初始化为 '0’
	InitBoard(show, ROWS, COLS, '*');
	//默认mine数组全部初始化为 '*’
	//DisplayBoard(mine, ROW, COL);//打印棋盘
	DisplayBoard(show, ROW, COL);//打印棋盘
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//打印棋盘

	//设置雷
	FindMine(mine,show, ROW, COL);
	//排查雷 
	//在mine数组排查雷
	//在show数组存放找到雷的信息

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		meun();
		printf("请选择:>");
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
			printf("选择错误，请重新选择\n");
			break;
		}



	} while (input);
	return 0;
}
