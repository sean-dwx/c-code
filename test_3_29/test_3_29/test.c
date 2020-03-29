#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//    int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = 0;
//	char arr[] ="abcdef";
//	len=my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dst,const char* src)
{
	char* ret = dst;
	assert(*dst != NULL);
	assert(*src != NULL);
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = *src;
	return ret;
	
}
int main()
{
	char arr1[] = "#########";
	char arr2[] = "hehe";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}
