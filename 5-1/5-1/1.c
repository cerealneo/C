#include<stdio.h>
void main()
/*
{
	int x, y, z;
	x = 30;
	y = 85;

	printf("\n    x   y    x>y   x>=y   x<y   x<=y   x==y   x!=y\n");
	printf("\n%5d%5d",x, y);

	z = x > y; printf("%5d", z);
	z = x >= y; printf("%6d", z);
	z = x < y; printf("%6d", z);
	z = x <= y; printf("%7d", z);
	z = x == y; printf("%7d", z);
	z = x != y; printf("%7d", z);
}
*/
/*
{
	int a, b;
	int and_op, or_op, not_op;

	a = 100; b = 50;
	and_op = a && b;
	or_op = a || b;
	not_op = !and_op;

	printf("상수의 AND 연산 : %d && %d = %d\n", a, b, and_op);
	printf("상수의 OR 연산 : %d || %d = %d\n", a, b, or_op);
	printf("상수의 NOT 연산 : !(%d && %d) = %d\n", a, b, not_op);
}
*/
/*
{
	int a = 2, b = 3, c = 4, d = 5;

	a += b;
	printf("a = %d\n", a);

	b -= c;
	printf("b = %d\n", b);

	c *= d;
	printf("c = %d\n", c);

	d /= a;
	printf("d = %d\n", d);

	a %= c;
	printf("a = %d\n", a);
}
*/
/*
{
	int a = 10, b = 10;
	int c, d;

	c = ++a; d = c + 10;
	printf("++a = %d, ++a + 10 = %d\n", c, d);

	c = b++; d = c + 10;
	printf("b++ = %d, 10 + b++ = %d\n", c, d);
	printf("%d %d\n", a, 1 + a--);
	printf("%d %d\n", b, 1 + (--b));
}
*/
/*
{
	int a = 10, b = 7;
	int c, d, e;

	c = a & b;
	d = a | b;
	e = a ^ b;

	printf("%d & %d = %d\n", a, b, c);
	printf("%d | %d = %d\n", a, b, d);
	printf("%d ^ %d = %d\n", a, b, e);
}
*/
/*
{
	int a = 10;
	int b, c;

	b = a >> 2;
	printf("%d >> 2 (%d을 오른쪽으로 2비트씩 시프트) = %d\n", a, a, b);

	c = b << 2;
	printf("%d << 2 (%d를 왼쪽으로 2비트씩 시프트) = %d\n", b, b, c);

	c = a << 2;
	printf("%d << 2 (%d를 왼쪽으로 2비트씩 시프트) = %d\n", a, a, c);
}
*/
/*
{
	int a, b, c, d;

	scanf("%d %d %d", &a, &b, &c);

	d = (a > b) ? ((b > c) ? (a - c) : (a + b)) : a - b;

	printf(" a  b  c  d\n");
	printf(" %d  %d  %d  %d \n", a, b, c, d);
}
*/
/*
{
	char c, ch;
	
	 while (scanf("%c", &c), c != 'Y')
	{
		ch = (c >= 'a' && c <= 'z') ? c - 32 : c + 32;
	
		printf(" %c\n", ch);
		
		scanf("%c", &c);
	 }
	 printf("THE END\n");
}
*/
{
	int inum = 180;
	double dnum = 180.2;

	inum = (int)dnum;
	dnum = (double)inum;

	printf("inum = %d\ndnum = %lf", inum, dnum);

}