#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  \n", &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;// 3
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;// 3
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//		
//	}
//
//
//	return 0;
//}
#include<string.h>
#include<windows.h>

//多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "KFC V ME 50";
//	char arr2[] = "***********";
//	int left = 0;
//	size_t right = strlen(arr1)-1;
//	printf("%s\n", arr2);
//	while(left<=right)
//	{
//		Sleep(1000);
//		             
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
//
//
//	return 0;
//}


int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	int key = 0;
	scanf("%d", &key);
 	int mid = 0;
 	int find = 0; // 假设没有找到
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr1[mid] > key)
		{
			right = mid - 1;

		}
		else if (arr1[mid] < key)
		{
			left = mid + 1;

		}
		else
		{
			find = 1;
			break;
		}
	}
	if (find == 1)
	{
		printf("找到了：数组下标 is %d\n", mid);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}