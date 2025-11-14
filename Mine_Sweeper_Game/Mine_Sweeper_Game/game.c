#define _CRT_SECURE_NO_WARNINGS
#include "game.h"




void InitBoard(char board[ROWS][COLS], int row, int col, char set)
//初始化棋盘
{
	int i = 0;
	for (i = 0; i <row; i++)
	{
		int j = 0;
		for (j = 0; j <col; j++)
		{
			board[i][j] = set;
		}
	
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
//打印棋盘
{
	int i = 0;
	printf("******扫雷游戏******\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);//打印行号
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印列号

		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
		
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
//生成10个随机的雷
//在随机的坐标设置雷

{
	int count = Easy_Count;//10个雷

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//随机生成 x y 坐标 
		//1 -9 范围
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int c = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] == '1')
				c++;
		}
	}
	return c;
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row, int col)
//排查雷
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col -Easy_Count)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) //判断坐标是否合法
		{
			if (mine[x][y] == '1')

			{
				printf("很遗憾，你踩到了雷\n");
				DisplayBoard(mine, ROW, COL);
				//打印雷的信息
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					//如果不是雷就统计该坐标周围有多少雷的个数
					int c = GetMineCount(mine, x, y);
					show[x][y] = c + '0';//数字转换字符
					DisplayBoard(show, ROW, COL);
					//打印找到雷的信息
					win++;
				}
				else
				{
					printf("该坐标已经排查过，请重新输入\n");
				}
			}
		}
		else
		{
			printf("输入非法，请重新输入\n");
		}
	}
	if (win == row * col - Easy_Count)
	{
		printf("恭喜排雷成功\n");
		DisplayBoard(mine, ROW, COL);

	}

}
