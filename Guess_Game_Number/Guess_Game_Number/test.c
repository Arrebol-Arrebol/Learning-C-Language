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
	printf("����������>");
	int r = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		scanf("%d", &guess);


		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");

		}
		else
		{
			printf("�¶���\n");
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
		printf("����������,�Ƿ�ʼ��Ϸ>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("�����������������\n");
			break;
		}

	} while (1);
	return 0;
}


