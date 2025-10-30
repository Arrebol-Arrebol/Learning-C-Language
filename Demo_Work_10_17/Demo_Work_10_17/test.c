#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	// a = 6 c = 6
//	b = ++c, c++, ++a, a++;
//	// c = 7 c = 8 a = 7 a=8
//	//b = 7
//	b += a++ + c;
//	// a + c = 16 
//	// a = 9
//	// b = 16 + 7 = 23
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	// a = 9 b = 23 c = 8
//	return 0;
//}
//int main() {
//    int num1 = 0;
//    int num2 = 0;
//    while (scanf("%d %d", &num1, &num2) != EOF)
//    {
//        printf("%d %d", num1 / num2, num1 % num2);
//
//
//    }
//
//
//    return 0;
//}

//int main()
//{
//    int num1 = 0;
//
//    while (scanf("%d", &num1) != EOF)
//    {
//
//        if (num1 >= 140)
//        {
//            printf("Genius");
//        }
//    }
//
//    return 0;
//}

//int main() {
//    int num1 = 0;
//    int num2 = 0;
//    while (scanf("%d %d", &num1, &num2) != EOF)
//    {
//        if (num1 > num2)
//        {
//            printf("%d>%d\n", num1, num2);
//        }
//        else if (num1 < num2)
//        {
//            printf("%d<%d\n", num1, num2);
//
//        }
//        else {
//            printf("%d=%d\n", num1, num2);
//
//        }
//
//    }
//
//    return 0;
//}
//int main()
//{
//    int num1 = 0;
//
//    while (scanf("%d ", &num1) != EOF)
//    {
//        if (num1 % 5 == 0)
//            printf("YES");
//        else
//        {
//            printf("NO");
//
//        }
//
//    }
//
//    return 0;
//}

//int main()
//{
//    int num1 = 0;
//    
//    while (scanf("%d", &num1) != EOF)
//    {
//        int num2 = 0;
//        for (num2 = 0;num2<num1;num2++)
//        {
//            printf("*");
//        }
//        printf("\n");
//
//    }
//
//    return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//дһ       ӡ1-100֮      3 ı         


//int main()
//{
//	int num1 = 1;
//	while (num1<=100)
//	{
//		if (num1 % 3 == 0)
//			printf("%d ", num1);
//		num1++;
//	}
//	return 0;
//}

//int main()
//{
//	int num1 = 1;
//	for (; num1 <= 100; num1++)
//	{
//		if (num1 % 3 == 0)
//			printf("%d ", num1);
//	}
//	return 0;
//}

//int main()
//{
//	int num1 = 3;
//	for (; num1 <= 100; num1 += 3)
//	{
//		printf("%d ", num1);
//	}
//	return 0;
//}

//
//
// 
//写代码将三个整数数按从大到小输出。

//例如：
//
//输入：2 3 1
//
//输出：3 2 1
// 
// 
// 
// 
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	if (num1 < num2)
//	{
//		tmp = num2;
//		num2 = num1;
//		num1 = tmp;
//	}
//	if (num1 < num3)
//	{
//		tmp = num3;
//		num3 = num1;
//		num1 = tmp;
//	}
//	if (num2 < num3)
//	{
//		tmp = num3;
//		num3 = num2;
//		num2 = tmp;
//	}
//	printf("num1 = %d num2 = %d num3 = %d\n", num1, num2, num3);
//	return 0;
//}
