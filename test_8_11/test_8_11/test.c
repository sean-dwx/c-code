#define _CRT_SECURE_NO_WARNINGS 1


/*
��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ��
����������������һ����ά�����һ���������ж��������Ƿ��и�����
*/

//
//int SearchNum(int arr[][4], int rows, int columns, int target)
//{
//	int row = 0;
//	int column = columns - 1;
//	while (row < rows && column >= 0)
//	{
//		if (arr[row][column] == target)
//		{
//			return 1;
//		}
//		else if (arr[row][column] > target)
//		{
//			column--;
//		}
//		else
//		{
//			row++;
//		}
//		{
//			return 0;
//		}
//	}
//	
//	int main()
//	{
//		int arr[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//		SearchNum(arr, 4, 4, 10);
//		return 0;
//	}
//
//
//
//	int main()
//	{
//		const char* p = "hello!";
//		printf("%c\n", *p);
//	}
//
//
//	//void main()
//	//{
//	//	int i = 0;
//	//	while (i < 10)
//	//	{
//	//		if (i < 1)
//	//			continue;
//	//		if (i == 5)
//	//			break;
//	//		i++;
//	//	}
//	//}
//
//	int main()
//	{
//		int i = 1;
//		while (i <= 10)
//		{
//			i = i + 1;
//			if (i == 5)
//				continue;
//			printf("%d", i);
//		}
//		return 0;
//	}
//
//

#include <stdio.h>
#include <string.h>
#include <assert.h>

	void replace_space(char *str)
	{
		assert(str);
		int len = strlen(str);
		int newlen = 0;
		int blank = 0;
		char *dst = NULL;
		char *src = NULL;
		char *p = str;
		while (*str++ != '\0')
		{
			if (*str == ' ')
			{
				blank++;
			}
		}
		str = p;
		newlen = len + 2 * blank;
		dst = str + newlen - 1;
		src = str + len - 1;
		while (src != dst)
		{
			if (*src == ' ')
			{
				*dst-- = '0';
				*dst-- = '2';
				*dst-- = '%';
				src--;
			}
			else
			{
				*dst-- = *src--;
			}
		}
	}
	int main()
	{
		char str[30] = "we are happy";
		replace_space(str);
		printf("%s\n", str);
		return 0;
	}
		