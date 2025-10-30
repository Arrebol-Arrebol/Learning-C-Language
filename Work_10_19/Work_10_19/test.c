#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//Class 3
//int main()
//{
//
//	// 输⼊⼀个整数，判断是否为奇数 否则打印偶数
//	int num1 = 0;
//	scanf("%d", &num1);
//	if (num1 % 2 != 0)
//	{
//		printf("%d is 奇数\n", num1);
//	}
//	else
//	{
//		printf("%d is 偶数\n", num1);
//	}
//	return 0;
//}

//输⼊⼀个年龄，>=18岁就输出：成年，
//否则就输出：未成年

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//
//	}
//	return 0;
//}


//要求输⼊⼀个整数，
//判断输⼊的整数是0，
//还是正数或者负数
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	if (num1 > 0)
//	{
//		printf("正数\n");
//	}
//	else if (num1 < 0)
//	{
//		printf("负数\n");
//
//	}
//	else
//	{
//		printf("整数是%d\n",num1);
//	}
//	return 0;
//}


//输⼊⼀个整数，如果是正数，再判断是奇数还是偶数，并输出；
//如果不是正数则输出：⾮正数
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	if (num1 > 0)
//	{
//		if (num1 % 2 == 0)
//			printf("%d is 偶数\n", num1);
//		else
//			printf("%d is 奇数\n", num1);
//
//	}
//	else
//		printf("非正数\n");
//
//	return 0;
//}
// 


//输⼊⼀个⼈的年龄
//如果年龄<18岁，打印"少年"
//如果年龄在18岁至44岁打印"青年"
//如果年龄在45岁至59岁打印"中老年"
//如果年龄在60岁至89岁打印"老年"
//如果90岁及以上打印"老寿星"

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age <= 44)
//	{
//		printf("青年\n");
//
//	}
//	else if (age >= 44 && age <= 59)
//	{
//		printf("中老年\n");
//
//	}
//	else if (age >= 60 && age <= 80)
//	{
//		printf("老年\n");
//
//	}
//	else
//		printf("老寿星\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//
//	else if (age <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}


//我们输⼊⼀个年龄，如果年龄在18岁~36岁之间，我们输出⻘年
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18 && age <= 36)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}

//练习1：使用条件操作符表示下面代码的逻辑
//#include <stdio.h>
//int main()
//
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a > b ? 3 : -3;
//	printf("%d\n", b);
//	return 0;
//}

//使⽤条件表达式实现找两个数中较⼤值。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int num1 = 0;
//	scanf("%d%d",& a, &b);
//	num1 = a > b ? a : b;
//	printf("max = %d\n", num1);
//
//	return 0;
//}


//如果我们说⽉份是3⽉到5⽉，是春天
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天\n");
//	return 0;
//}


//我们说⼀年中⽉份是12⽉或者1⽉或者2⽉是冬天
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("冬天\n");
//	return 0;
//}

//输⼊⼀个年份year，判断year是否是闰年
//能被4整除并且不能被100整除是闰年
//能被400整除是闰年

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("闰年\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("闰年\n");
//
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	
//	return 0;
//}
//




//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	// 1 2 3 4
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	// 1 3 3 4
//	return 0;
//}

//输⼊任意⼀个整数值，计算除3之后的余数
// if 语句
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 3 == 0)
//	{
//		printf("余数是0\n");
//	}
//	else if (a % 3 == 1)
//	{
//		printf("余数是1");
//	}
//	else 
//		printf("余数是2");
//	return 0;
//}
// switch 语句
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//
//	case 2:
//		printf("余数是2\n");
//		break;
//			
//	}
//	
//	return 0;
//}


//输入⼊⼀个1~7的数字，打印对应的星期⼏

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//
//	case 3:
//		printf("星期三\n");
//		break;
//
//	case 4:
//		printf("星期四\n");
//		break;
//
//	case 5:
//		printf("星期五\n");
//		break;
//
//	case 6:
//		printf("星期六\n");
//		break;
//
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("请重新输入\n");
//		break;
//
//
//	}	return 0;
//}

//1.输⼊1~5，输出的是“⼯作⽇”;
//2.输⼊6~7，输出“休息⽇”

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		
//	case 2:
//		
//
//	case 3:
//		
//
//	case 4:
//		
//
//	case 5:
//		printf("工作日\n");
//		break;
//
//	case 6:
//		
//
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("请重新输入\n");
//		break;
//
//
//	}	return 0;
//}


//在屏幕上打印1~10的值
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		printf("%d ", i % 10);
//		i = i / 10;
//
//	}
//	return 0;
//}

// for 循环 在屏幕上打印1~10的值
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//计算1~100之间3的倍数的数字之和

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//		//i =3;i<=100;i+=3
//	{
//		if (i % 3 == 0)
//			sum = sum + i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//dowhile循环的实例
//在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i += 1;
//
//	} while (i <= 10);
//	
//
//	
//	return 0;
//}

//输⼊⼀个正整数，计算这个整数是⼏位数？
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		i = i / 10;
//	} while (i);
//	printf("%d ", cnt);
//	return 0;
//}


// 1 2 3 4
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i  == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


// 1 2 3 4 无限循环
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i += 1;
//
//	} while (i <= 10);
//	
//
//	
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i += 1;
//
//	} while (i <= 10);
//
//
//
//	return 0;
//}

//找出100~200之间的素数，并打印在屏幕上
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
		// i = 101；i<=200;i+=2
	{
		int flag = 1;//假设i是素数
		int j = 0;
		for (j = 2; j <= i - 1; j++)
			//j<=sqrt(i)
		{
			if (i % j == 0)
				flag = 0;//i不是素数
			break;
		}
		if (flag == 1)
			printf("%d ",i);

	}
	

	return 0;
}