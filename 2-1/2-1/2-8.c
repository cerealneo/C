#include<stdio.h>
void main(void)
{
	float a, b, add, mul;

	a = 0.1234e2F;
	b = 12.34F;

	add = a + b;
	mul = a * b;

	printf("add : %10.6f + %10.6f = %10.6f\n", a, b, add);
	printf("mul: %10.6f * %10.6f = %12.6f\n", a, b, mul);
}