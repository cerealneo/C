#include<stdio.h>
void main(void)
/*
{
	int a;
	unsigned int b;

	a = 2147483647 + 1;
	b = 2147483647 + 1;

	printf("a=%d\n", a);
	printf("b=%u\n", b);
}
*/
/*
{
	unsigned int a, b, sub;
	a = 10;
	b = 20;
	sub = a - b;

	printf("%d - %d = %d\n", a, b, sub);
	printf("%u - %u = %u\n", a, b, sub);
}
*/
/*
{
	int a, b;
	a = 0154;
	b = 0254;

	printf("%o + %o = %x (16진수)\n", a, b, a + b);
	printf("%o + %o = %o (8진수)\n", a, b, a + b);
}
*/
{
	double a, b;
	a = 0.000000135;
	b = 0.00135;

	printf("%e\n", a);
	printf("%e\n", b);
	printf("a = %g\nb = %g", a, b);

}