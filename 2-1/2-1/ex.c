#include<stdio.h>
void main()
/* 4�� ����
{
	float a, b = 1234.0, c = 9999.0;
	double d;

	a = b / c;
	d = b / c;
	printf("a = %22.20f d = %22.20f\n", a, d);
}
*/
/* 5�� ����
{
	double p, r, s, l;
	p = 3.14159; r = 12.34;
	s = r * r * p;
	l = 2 * p * r;

	printf("���� ���� = %.3f\n", s);
	printf("���ѷ� = %5.2f\n", l);

}
*/
/* 6�� ����
{
	int a, b;
	a = 155;
	b = 55;

	printf("a = %d, b = %d (10����)\n", a, b);
	printf("a = %o, b = %o (8����)\n", a, b);
	printf("a = %x,  b = %x (16����)\n", a, b);

}
*/
/* 7�� ����
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
/* 8�� ����
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
/* 9������
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
/* 10������
{
	float a, b;


	printf("ȭ�� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &a);

	b = (5.0 / 9.0) * (a - 32);

	printf("�����µ� : %.2f\n", b);

}
*/
//11�� ����
{

	float a, Rc, R1, R2, R3;

	printf("R1�� �Է��Ͻÿ� : ");
	scanf("%f", &R1);

	printf("R2�� �Է��Ͻÿ� : ");
	scanf("%f", &R2);
	
	printf("R3�� �Է��Ͻÿ� : ");
	scanf("%f", &R3);

	a = (1 / R1) + (1 / R2) + (1 / R3);
	Rc = (1 / a);

	printf("���װ�(Rc)�� : %.2f\n", Rc);
}
