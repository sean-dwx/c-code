#define _CRT_SECURE_NO_WARNINGS 1

//#include <string.h>
//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	printf("%s\n", acNew);
//	printf("%d\n", strlen(acNew));
//	printf("%d\n", sizeof(acHello));
//
//	return 0;
//}

#include <stdio.h>


//  1>µÝ¹é
//int Fib(int n)
//{
//	if (n <= 2)
//		return  1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//   2>Ñ­»·

int Fib(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	if (n > 2)
	{
		int Fn;
		int F1 = 1;
		int F2 = 1;
		for (int k = 2; k <= n; k++)
		{
		    Fn= F1 + F2;
			F1 = F2;
			F2 = Fn;
          
		}
	}
}


	int main()
	{
		int n,ret;
		scanf("%d", &n);
	    ret = Fib(n);
		printf("%d\n", ret);
		return 0;
	}








