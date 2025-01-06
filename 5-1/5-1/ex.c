#include<stdio.h>
void main()
/*
{
	int a = 3 * 4 / 6 && 5;

	printf("3 * 4 / 6 && 5 = %d", a);
}
*/

{
	int a = 1-(2<<3)|4&4*2+3%2;

	printf("1 - (2<<3) | 4 & 4 * 2 + 3 ÷ 2 = %d", a);
}

/*
{
	int a = 2 * 3 / 6 > 4 | 3;

	printf("2 * 3 / 6 > 4 | 3 = %d", a);
}
*/
/*
{
	int a = 5 * (15 - 32) / 9;

	printf("5 * (15 - 32) / 9 = %d", a);
}
*/
/* 2번 문제
{
	int a = 20, b = 20;
	int c, d;

	c = ++a; d = c + 10;
	printf("++a = %d, ++a + 10 = %d\n", c, d);

	c = b++; d = c + 10;
	printf("b++ = %d, 10 + b++ = %d\n", c, d);
}
*/
/* 3번 문제
{
	int a = 13;
	int b, c;

	b = a >> 2;
	printf("%d >> 2 = %d\n", a, b);

	c = b << 2;
	printf("%d << 2 = %d\n", b, c);
}
*/
/* 4번 문제
{
	int a, b, c, d, e, f;

	a = 35, b = -3, c = -24;

	d = ((a > 0) ? a : -a);
	e = ((b > 0) ? b : -b);
	f = ((a > 0) ? c : -c);

	printf("d = %d\n", d);
	printf("e = %d\n", e);
	printf("f = %d\n", f);
}
*/
/* 5번문제
{
	int a = 15, b = 6;
	int c, d, e;

	c = a & b;
	d = a | b;
	e = a ^ b;

	printf("%d & %d = %d\n", a, b, c);
	printf("%d | %d = %d\n", a, b, d);
	printf("%d ^ %d = %d\n", a, b, e);
}
*/
/*6번 문제
{
	int a, b, c, d, e, f;

	a = 12; b = 0; c = 1;
	d = a && b; e = a || b; f = !(a && c);

	printf("%d && %d = %d\n", a, b, d);
	printf("%d || %d = %d\n", a, b, e);
	printf("!(%d && %d) = %d\n", a, c, f);
}
*/
/* 7번 문제
{
	int a, i, j;
	float b, c, k;

	b = 2.6, c = 2.9;
	i = 20, j = 5;

	a = (int)b + (int)c;

	printf("a = %d\n", a);
	printf("k = %5.2f\n", (float)i / (float)j);
}
*/