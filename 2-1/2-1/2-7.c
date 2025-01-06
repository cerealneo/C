#include<stdio.h>
void main(void)
{
	int a, b, c, d, x;
	a = 10;
	b = 20;
	c = 30;
	x = 40;
	d = (a * (x + b) * (x + c));
	printf("(%d * ( %d + %d) * ( %d + %d ) ) = %d\n", a, x, b, x, c, d);
}