#include<stdio.h>
void main(void)
{
	int a, b, add, sub, mul, div, rem;
	a = 7; b = 3;

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	rem = a % b;

	printf("%d + %d = %d\n", a, b, add);
	printf("%d -%d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %d and %d\n", a, b, div, rem);
}