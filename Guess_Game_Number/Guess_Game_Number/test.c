#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("****       1.0 play       ****\n");
	printf("****       2.0 exit       ****\n");
	printf("******************************\n");

}
void game()
{
	printf("请输入数字>");
	int r = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		scanf("%d", &guess);


		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		if (input == 2)
			break;
		printf("请输入数字,是否开始游戏>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (1);
	return 0;
}


