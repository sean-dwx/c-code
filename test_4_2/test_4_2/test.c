#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����Ϊ����
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


//����Ϊָ��
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
//������arr,��ʾ��Ԫ�صĵ�ַ
//��ά�������Ԫ����1��ά����ĵ�һ��
//�������ﴫ�ݵ�arr,��ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//����������ָ��������
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print(arr, 3, 5);
	return 0;
}