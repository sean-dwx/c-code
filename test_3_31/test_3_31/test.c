#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>//ָ�����;����˽����ò����������ʵ��ֽڴ�С��
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
//check()//�жϵ�ǰ�����ֽ���,�����ڲ��������������Ժ�������Ҫ������
//{
//	int ret = 0;
//	int i = 1;
//	char* p = (char*)&i;
//	ret = *p;//ָ�����;����˽����ò������ܷ��ʼ����ַ�����int����ǿתΪchar���͡���char���ͽ�����ֻ����һ���ֽڡ�
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//}
//int main()
//{
//	check();
//}


//�ж��ֽ���Ľ���
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
		printf("С��\n");//�����ڲ���ò�Ҫ���д�ӡ�����ֺ����Ķ����ԡ�
	}
	else
	{
		printf("���\n");
	}
}