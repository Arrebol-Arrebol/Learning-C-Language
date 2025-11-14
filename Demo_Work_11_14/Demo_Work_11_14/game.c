#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void InitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
		

	}

}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("******扫雷游戏******\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");

	}
	
}



void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = Easy_Count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}




int CountMine(char mine[ROWS][COLS],int x,int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y -
		1] + mine[x + 1][y] +
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}
void Getmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - Easy_Count)
	{
		printf("请选择排查的坐标:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你踩到的雷\n");
				DisPlayBoard(mine, ROW, COL);

			}
			else
			{
				if (show[x][y] == '*')
				{
					int c = CountMine(mine, x, y);
					show[x][y] = c + '0';
					DisPlayBoard(show, ROW, COL);
					win++;
				}
				else
				{
					printf("坐标已排查，请重新输入\n");
				}
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}
	if (win == row * col - Easy_Count)
	{
		printf("恭喜你，排雷成功\n");
		DisPlayBoard(mine, ROW, COL);

	}
}
