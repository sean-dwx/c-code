#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//参数为数组
//void print(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print(arr,3,5);
//	return 0;
//}


//参数为指针
void print(int(*arr)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
	    for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
			printf("\n");
	}
}
//数组名arr,表示首元素的地址
//二维数组的首元素是1二维数组的第一行
//所以这里传递的arr,其实相当于第一行的地址，是一维数组的地址
//可以用数组指针来接收
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print(arr, 3, 5);
	return 0;
}