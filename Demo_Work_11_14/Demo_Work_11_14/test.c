#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void meun()
{
	printf("************************\n");
	printf("*******1.0 Play*********\n");
	printf("*******0.0 Exit*********\n");
	printf("************************\n");


}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisPlayBoard(mine, ROW, COL);
	DisPlayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);

	DisPlayBoard(mine, ROW, COL);
	Getmine(mine, show, ROW, COL);



}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do

	{
		printf("请选择:\n");
		meun();
		scanf("%d", &input);
		switch(input)
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