//#define _CRT_SECURE_NO_WARNINGS
//
#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******1.0 paly********\n");
//	printf("*******2.0 exit********\n");
//	printf("***********************\n");
//}
//void game()
//{
//	
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字：");
//		scanf("%d", &guess);
//
//		if (guess > r)
//		{
//			printf("猜大了\n");
//			
//			
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//			
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//		
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		if (input == 2)
//			break;
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//			
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//		
//	return 0;
//}
#include<math.h>
//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//			break;
//		}
//		if (flag == 1)
//			printf("%d ", i);
//			
//	}
//	return 0;
//}

//求10 个整数中最大值
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//假设arr[0]是最大的
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max = %d\n", max);
	return 0;
}