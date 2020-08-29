#include <stdio.h>
#if 0
int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}

void main()
{
	int j = 4;
	int m = 1;
	int k;
	k = fun(j, m);
	printf("%d,",k);
	k = fun(j, m);
	printf("%d/n", k);
	return;
}
#endif

void main()
{
	enum ENUM_A
	{
		x1,
		y1,
		z1 = 5,
		A1,
		B1
	};
	enum ENUM_A enumA = y1;
	enum ENUM_A enumB = B1;
	printf("%d\n", enumA);
	printf("%d\n", enumB);


}

