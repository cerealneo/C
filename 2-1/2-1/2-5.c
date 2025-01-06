#include<stdio.h>
void main()
{
	int a, b, c, d, e;
	long f;
	long long g;
	a = 74; b = 32768;
	c = 2147483647; d = 2147483648; e = 2147483648L;
	f = 2147483648L;
	g = 2147483648L;
	printf("a=%db=%d\n", a, b);
	printf("c=%dd=%de=%d\n", c, d, e);
	printf("f=%ld\n", f);
	printf("g=%lld\n", g);

}