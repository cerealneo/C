#include<stdio.h>
void main()
/* 4번 문제
{
	float a, b = 1234.0, c = 9999.0;
	double d;

	a = b / c;
	d = b / c;
	printf("a = %22.20f d = %22.20f\n", a, d);
}
*/
/* 5번 문제
{
	double p, r, s, l;
	p = 3.14159; r = 12.34;
	s = r * r * p;
	l = 2 * p * r;

	printf("원의 면적 = %.3f\n", s);
	printf("원둘레 = %5.2f\n", l);

}
*/
/* 6번 문제
{
	int a, b;
	a = 155;
	b = 55;

	printf("a = %d, b = %d (10진수)\n", a, b);
	printf("a = %o, b = %o (8진수)\n", a, b);
	printf("a = %x,  b = %x (16진수)\n", a, b);

}
*/
/* 7번 문제
{
	float a, b;
	a = 253.256;
	b = 45.8566;

	printf("a + b = %f\n", a + b);
	printf("a - b = %f\n", a - b);
	printf("a * b = %f\n", a * b);
	printf("a / b = %f\n", a / b);

}
*/
/* 8번 문제
{
	int num1, num2, temp;

	num1 = 5;
	num2 = 7;

	printf("num1 = %d, num2 = %d\n", num1, num2);

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("num1 = %d, num2 = %d\n", num1, num2);
}
*/
/* 9번문제
{
	float a, b;
	double c, d, e;

	a = 22.567;
	b = 27.23;

	c = a * b;
	d = a / b;
	e = a - b;

	printf("%f * %f = %f\n", a, b, c);
	printf("%f / %f = %f\n", a, b, d);
	printf("%f - %f = %f\n", a, b, e);
}
*/
/*
{
	float a = 22.567, b = 27.23;
	double c, d, e;
	c = a * b; d = a / b; e = a - b;

	printf("%f * %f = %f\n", a, b, c);
	printf("%f / %f = %f\n", a, b, d);
	printf("%f - %f = %f\n", a, b, e);
}
*/
/* 10번문제
{
	float a, b;


	printf("화씨 온도를 입력하시오 : ");
	scanf("%f", &a);

	b = (5.0 / 9.0) * (a - 32);

	printf("섭씨온도 : %.2f\n", b);

}
*/
//11번 문제
{

	float a, Rc, R1, R2, R3;

	printf("R1값 입력하시오 : ");
	scanf("%f", &R1);

	printf("R2값 입력하시오 : ");
	scanf("%f", &R2);
	
	printf("R3값 입력하시오 : ");
	scanf("%f", &R3);

	a = (1 / R1) + (1 / R2) + (1 / R3);
	Rc = (1 / a);

	printf("저항값(Rc)은 : %.2f\n", Rc);
}
