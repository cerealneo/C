#include<stdio.h>
void main(void)
/*
{
	int n;

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("%d�� ¦���Դϴ�.\n", n);
	else
		printf("%d�� Ȧ���Դϴ�.\n", n);
}
*/
/*
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("1, ");
	else
		printf("0, ");
		printf("%d", a);
}
*/
/*
{
	int score;

	printf("������ �Է��ϼ���:");
	scanf("%d", &score);

	if (score >= 60)
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");
}
*/
/*
{
	int code, radius;
	float pi = 3.14;
	float circle, area;

	printf("�ڵ�� �������� �Է��ϼ���:");
	scanf("%d %d", &code, &radius);

	if (code == 1)
	{
		area = pi * radius * radius;
		printf("������ : %d ���� ���� : %f\n", radius,area);
	}
	else
	{
		circle = 2 * pi * radius;
		printf("������ : %d ���� �ѷ� : %f\n", radius, circle);
	}
}
*/
/*
{
	char c, ch;
	printf("1���� ���ڸ� �Է��Ͻÿ�:");

	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
	{
		ch = c - 32;
		printf("%c�� �빮�ڴ� %c�Դϴ�.\n", c, ch);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		ch = c + 32;
		printf("% c�� �ҹ��ڴ� % c�Դϴ�.\n", c, ch);
	}
	else
		printf("%c�� �����ڰ� �ƴմϴ�.\n", c);
}
*/
/*
{
	int score, score1, score2;
	printf("�ΰ��� ������ �Է��Ͻÿ�:");

	scanf("%d %d", &score1, &score2);

	score = (score1 + score2) / 2;

	if (score >= 90)
		printf("%d�� ���� ������ A�Դϴ�.\n", score);
	else if (score >= 80)
		printf("%d�� ���� ������ B�Դϴ�.\n", score);
	else if (score >= 70)
		printf("%d�� ���� ������ C�Դϴ�.\n", score);
	else if (score >= 60)
		printf("%d�� ���� ������ D�Դϴ�.\n", score);
	else
		printf("%d�� ���� ������ F�Դϴ�.\n", score);
}
*/
/*
{
	int height, weight;
	double result;

	printf("����(cm)�� �Է��ϼ��� : ");
	scanf("%d", &height);

	printf("������(kg)�� �Է��ϼ��� : ");
	scanf("%d", &weight);

	result = (weight / ((height / 100.0) * (height / 100.0)));

	if (result < 18.5)
	{
		printf("BMI = %.2f\n", result);
		printf("����� ü�߹̴� �Դϴ�.	\n");
	}
	else if (result >= 18.5 && result < 25.0)
	{
		printf("BMI = %.2f\n", result);
		printf("����� ���� ü�� �Դϴ�.\n");
	}
	else if (result >= 25.50 && result < 30.0)
	{
		printf("BMI = %.2f\n", result);
		printf("�����	��1�� �� �Դϴ�.\n");
	}
	else if (result >= 30.0 && result < 35.0)
	{
		printf("BMI = %.2f\n", result);
		printf("����� �� 2�� �� �Դϴ�.\n");
	}
	else if (result >= 35.0 && result < 40.0)
	{
		printf("BMI = %.2f\n", result);
		printf("����� ��3�� �� �Դϴ�.\n");
	}
	else
	{
		printf("BMI = %.2f\n", result);
		printf("����� ��4�� �� �Դϴ�.\n");
	}
}
*/
/*
{
	int a;
	printf("���ڸ��Է��ϼ���(1~4)=>");
	scanf("%d", &a);

	switch (a)
	{
	case 1:printf("����");
	case 2:printf("�λ�");
	case 3:printf("�뱸");
	case 4:printf("����");
	default:printf("��Ÿ���ø�");
	}
}
*/
/*
{
	char a;
	int x = 20, y = 10;
	printf("��Ģ�����ڸ� �Է��ϼ���(+,-,/,*) : ");
	scanf("%c", &a);

	switch (a) {
	case'+':
		printf("%d + %d = %d\n", x, y, x + y);
		break;
	case'-':
		printf("%d - %d = %d\n", x, y, x - y);
		break;
	case'/':
		printf("%d / %d = %d\n", x, y, x / y);
		break;
	case'*':
		printf("%d * %d = %d\n", x, y, x * y);
		break;
	default:
		printf("������ �߸� �Է��ϼ̽��ϴ�");
	}
}
*/
/*
{
	int no;
	char code;

	printf("�ڵ带 �Է��ϼ���(o,h,c �߿� ����):");
	scanf("%c", &code);
	printf("������ �Է��ϼ���:");
	scanf("%d", &no);

	switch (code) {

	case'o':
		printf("%d�� 8���� = %o\n", no, no);
		break;
	case'h':
		printf("%d�� 16���� = %x\n", no, no);
		break;
	case'c':
		printf("%d�� ���� = %c\n", no, no);
		break;
	default:
		printf("�ڵ带 �߸� �Է��߽��ϴ�.\n");
	}
}
*/
{
	int year, temp;

	printf("����⵵�� �Է��ϼ���:");
	scanf("%d", &year);

	temp = year % 12;

	switch (temp) {
	case 0:
		printf("����� ����⵵ %d�� ����Դϴ�\n", year);
		break;
	}
}