#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ��ң�����,��x�Ƿ��������У�����ڷ����±꣬���򷵻�-1

//1�����Ҿ��Ǳ�����
int Binarysearch(int array[],int size,int data)
{
	int left = 0;
	int right = size - 1;//���Ҿ��Ǳ�����
	while (left<=right)
	{
		int mid = left + ((right - left) >> 1);//����һλ����2��
		if(data == array[mid])
			return mid;
		else if (data < array[mid])
			right = mid - 1;//mid�Ѿ����ҹ��ˣ���Ӧ����ڶ���Ѱ��
		else
			left = mid + 1;
	}
	return -1;
}

int main()
{
	int array[] = { 1, 3, 5, 7, 9 };
	int data = 8;
	int Binarysearch();
	return 0;
}

//
//
////2������ҿ�
//int Binarysearch(int array[], int size, int data)
//{
//	int left = 0;
//	int right = size ;//����ҿ�
//	while (left < right)
//	{
//		int mid = left + ((right - left) >> 1);//����һλ����2��
//		if (data == array[mid])
//			return mid;
//		else if (data < array[mid])
//			right = mid ;//mid�Ѿ����ҹ��ˣ���Ӧ����ڶ���Ѱ��
//		else
//			left = mid ;
//	}
//	return -1;
//
////}


//�������������кϲ���һ����������
//#include <stdio.h>
//#include <stdlib.h>
//
//int* MergeData(int array1[], int size1, int array2[], int size2)
//{
//	int index1 = 0, index2 = 0, index = 0;
//	int* array = (int*)malloc((size1 + size2)*sizeof(array1[0]));
//	if (NULL == array)
//		return NULL;
//	while (index1<size1&&index2<size2)
//	{
//		if (array1[index1]<=array2[index2])
//			array[index++] = array1[index1++];
//		else
//			array[index++] = array2[index2++];
//	}
//
//	while (index1<size1)
//		array[index++] = array1[index1++];
//
//	while (index2<size2)
//		array[index++] = array2[index2++];
//
//	return array;
//}
//
//int main()
//{
//	int array1[] = { 2, 5, 6, 8 };
//	int array2[] = { 1, 3, 5, 7, 8, 9 };
//
//	int* array = MergeData(array1, sizeof(array1) / sizeof(array1[0]), array2, sizeof(array2) / sizeof(array2[0]));
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", array[i]);
//	free(array);
//	return 0;
//
//}