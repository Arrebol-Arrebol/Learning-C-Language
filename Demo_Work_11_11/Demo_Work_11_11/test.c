#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = bin_search(arr, left, right, key);
//	if (ret == -1)
//	{
//		printf("找不到 %d\n", ret);
//	}
//	else
//	{
//		printf("找到了 %d\n", ret);
//
//	}
//	return 0;
//}


//void Fun(int input)
//{
//	int i = 0;
//	
//	for (i = 1; i <=input; i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			
//			printf("%d*%d=%-3d", j,i,i*j);
//		}
//		printf("\n");
//
//
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	Fun(input);
//	return 0;
//}
//void is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		printf("是润年\n");
//	}
//	else
//	{
//		printf("不是润年\n");
//
//	}
//
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}
//void is_prime(i)
//{
//	int j = 0;
//	int flag = 1;//假设i是素数
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			flag = 0;
//			break;
//		} 
//		
//	}
//	if (flag == 1)
//	{
//		printf("%d ", i);
//	}
//
//
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i ++)
//	{
//		is_prime(i);
//
//	}
//	return 0;
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//
//	{
//		int tmp = arr[left];
//		arr[left]=arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//		
//		 
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	Print(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	printf("*********************\n");
//
//	Print(arr, sz);
//
//	return 0;
//}