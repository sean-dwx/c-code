#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//计算n的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret= 1;
//	scanf("%d", &n);
//	for(i = 1; i<= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}


int main()//计算1！+2！+3！
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	for (i = 1; i <= 3; i++)
	{
		ret = 1;//易错
		for (j = 1; j <= i; j++)
		{
			ret = ret*j;
		}
		sum = sum + ret;	
	}
	printf("sum=%d", sum);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret * i;
//		}
//		//n的阶乘
//		sum = sum + ret;
//	}
//	//ret = 1*1 = 1
//	//ret = 1*1*2 = 2
//	//ret = 1*1*2*3 = 6
//
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}



