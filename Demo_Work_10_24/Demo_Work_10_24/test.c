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
//		printf("���������֣�");
//		scanf("%d", &guess);
//
//		if (guess > r)
//		{
//			printf("�´���\n");
//			
//			
//		}
//		else if (guess < r)
//		{
//			printf("��С��\n");
//			
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//			
//		default:
//			printf("�����������������\n");
//		}
//
//	} while (input);
//		
//	return 0;
//}
#include<math.h>
//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
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

//��10 �����������ֵ
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//����arr[0]������
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max = %d\n", max);
	return 0;
}