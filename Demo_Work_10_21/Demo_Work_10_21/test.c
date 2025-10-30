#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			
//
//			b = b + 3;
//			
//
//			// a = 1  b = 4
//			// a = 2  b = 7
//			// a = 3  b = 10
//			// a = 4  b = 13
//			// a = 5  b = 16
//			// a = 6  b = 19
//			// a = 7  b = 22
//			  
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && c + b > a)
//        {
//            if (a == b && a == c && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || a == c || b == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else {
//                printf("Ordinary triangle!\n");
//
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//
//    }
//
//    return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d",j,i,j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i)*flag;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 
//	//96 97 98 99
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			
//				count++;
//			
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//
//		}
//		
//	}
//	printf("%d ", count);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = a % b;
	while (c!=0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("%d ", b);
	return 0;
}