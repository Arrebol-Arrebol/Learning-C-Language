#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	int sum = Add(num1, num2);
//	printf("%d ", sum);
//	return 0;
//}

//void set_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0 && y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int get_days_month(y, m)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int day = days[m];
//	if (is_leap_year(y) && (m == 2))
//		day += 1;
//	return day;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d%d", &y, &m);
//	int d = get_days_month(y, m);
//	printf("%d ", d);
//	return 0;
//}