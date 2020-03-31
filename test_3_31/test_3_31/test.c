#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>//指针类型决定了解引用操作符所访问的字节大小。
//int main()
//{
//	int n = 0x11223344;
//	char* pc=(char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0;
//
//	return 0;
//}


//#include <stdio.h>
//check()//判断当前机器字节序,函数内部创建变量，所以函数不需要参数。
//{
//	int ret = 0;
//	int i = 1;
//	char* p = (char*)&i;
//	ret = *p;//指针类型决定了解引用操作符能访问几个字符，将int类型强转为char类型。对char类型解引用只访问一个字节。
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}
//int main()
//{
//	check();
//}


//判断字节序改进版
#include <stdio.h>
int check_sys()
{
	int i = 1;
	return(*(char*)&i);
}
int main()
{
	int ret=check_sys();
	if (ret == 1)
	{
		printf("小端\n");//函数内部最好不要进行打印，保持函数的独立性。
	}
	else
	{
		printf("大端\n");
	}
}