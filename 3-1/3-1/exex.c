#include<stdio.h>
void main(void)
/*
{
	float a, b;
	int c, d;
	a = 12.4;
	b = 13.5;
	c = 15;
	d = 10;

	printf("%.2f + %.2f = %.2f\n" ,a,b,a+b);
	printf("%d - %d = %d\n", c, d, c - d);
}
*/
/*
{
	float a;
	a = 3.156;

	printf("%.3f %2f %10f %10.1f %f\n", a, a, a, a, a);

}
*/
/*
{
	int a = 123456;
	float b = 12.12547;

	printf("1234567890123456789012345678901234567890123456\n");
	printf("----------------------------------------------\n");
	printf("   %d   %6d   %5d %8d\n", a, a, a, a);
	printf("%f   %2.3f %8.4f %.5f% 10.5f\n",b,b,b,b,b);
}
*/
/*
{
	int a, b, c;
	a = 12, b = 321, c = 1256;

	printf("1234567890\n");
	printf("%3d\n", a);
	printf("%3d\n", b);
	printf("%3d\n", c);
}
*/
/*
{
	float a = 433.4892, b = 16.2345;

	printf("%8.3f + %7.4f = %7.4f\n", a, b, a + b);
	printf("%8.2f - %7.2f = %8.4f\n", a, b, a - b);
	printf("%8.4f * %7.4f = %e\n", a, b, a * b);
	printf("%8.4f / %7.4f = %g\n", a, b, a / b);
}
*/

{
	char a, b; 
	//������ a, b�� �����Ѵ�
	unsigned char c; 
	//��ȣ���� �ؽ�Ʈ c�� �����Ѵ�

	a = 'A';
	//a�� 'A'�� �����Ѵ�
	b = a + 1;
	//b�� a+1���� �����Ѵ�
	printf("a = %c = %d, b = %c = %d\n", a, a, b, b);
	//printf�� a= �ƽ�Ű�ڵ� "A"�� �������� �ƽ�Ű �ڵ� �� (65)�� ����ϰ�
	//b�� A+1�� �ƽ�Ű �ڵ� "B"�� �������� �ƽ�Ű �ڵ� �� 66�� ��µȴ� 
	b = 36;
	//b�� 36�� �����Ѵ�
	c = 75;
	//c�� 75�� �����Ѵ�.
	printf("a = %c = %d, b = %c = %d\n", b, b, c, c);
	//printf�� 36�� �ƽ�Ű�ڵ� $�� �ڵ尪 36�� ����ϰ�
	//b�� 75�� �ƽ�Ű�ڵ� K�� �ڵ尪 75�� ����Ѵ�.
}

/*
{
		int a, b;
		double c;
		a = 123;
		b = 456;
		c = 7.856;

		printf("%d%d\n", a, b);
		printf("%-10d%+8d\n", a, b);
		printf("a = %d, b = %d\n", a, b);
		printf("%10.2f%10f%f\n", c, c, c);
}
*/