#include<stdio.h>
void main(void)
/* ����
{
	float a;
	double b;
	scanf("%f%1f", &a, &b);
	printf("a= %f b= %1f", a, b);
}
*/
/* 4-1
{
	int a, b;
	float c, d;

	printf("�ΰ��� ������ �Է��ϼ���:");
	scanf("%d%d", &a, &b);

	printf("�ΰ��� �Ǽ��� �Է��ϼ���:");
	scanf("%f%f", &c, &d);

	printf("a = %d b = %d\n", a, b);
	printf("c=%.2f d = %f\n", c, d);
}
*/
/* 4-2��
{
	double dnum;
	float fnum;

	printf("�Ǽ�(double��)�� �Է��Ͻÿ�:");
	scanf("%lf", &dnum);
	printf("�Ǽ�(float��)�� �Է��Ͻÿ�:");
	scanf("%f", &fnum);

	printf("\n�Է��� ���� ��� ����Ʈ\n");
	printf("double���� �� : %.10f\n", dnum);
	printf("float���� �� :  %.10f\n", fnum);
}
*/
/* 4-3��
{
	char a, b, c, d;

	printf("�� ���ڸ� �Է��ϼ���:");
	scanf("%c%c", &a, &b);

	printf("�� ���ڸ� �Է��ϼ���:");
	scanf("%*c%c%c", &c, &d);

	printf("%c%c\n", a, b);
	printf("%c%c\n", c, d);
}
*/
/* 4-4��
{
	int a;
	printf("1���ڸ� �Է��ϼ���=>");
	a = getchar();
	putchar(a);
}
*/
/* 4-5��
{
	char str[8];
	int num1, num2;
	scanf("%s%d", str, &num1);
	scanf("%*d%d", &num2);

	printf("%s %d\n", str, num1);
	printf("%d\n", num2);
}
*/
/* 4-6��
{
	char str[8];

	printf("1���ڿ��� �Է��ϼ���=>");
	gets(str);
	puts(str);

	printf("1���ڿ��� �Է��ϼ���=>");
	scanf("%s", str);
	puts(str);
}
*/
/* 4-8��
{
	int a;

	for (;;)
	{
		a = getchar();

		if (a == -1)
			break;
		putchar(a);
	}

}
*/

{
	char a, b;

	printf("�� ���ڸ� �Է��ϼ���:");
	scanf("%s", &a);

	printf("�� ���ڸ� �Է��ϼ���:");
	scanf("%*s%s", &b);

	printf("%s\n", a);
	printf("%s\n", b);
}