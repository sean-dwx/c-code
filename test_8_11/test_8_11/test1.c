#define _CRT_SECURE_NO_WARNINGS 1
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
	system("pause");
	return 0;
}