#include<stdio.h>
void main()
/*//1��
{
	int x, y;
	char a;

	printf("x = ");
	scanf("%d", &x);

	printf("y = ");
	scanf("%d", &y);

	printf("��Ģ �����ڸ� �Է��ϼ���(+, -, /, *): ");
	scanf("%s", &a);

	if (a =='+')
		printf("%d + %d = %d\n", x, y, x + y);
	else if (a=='-')
		printf("%d - %d = %d\n", x, y, x - y);
	else if (a == '*')
		printf("%d * %d = %d\n", x, y, x * y);
	else if (a == '/')
		printf("%d / %d = %d\n", x, y, x / y);
	else
		printf("�߸� �Է��Ͽ����ϴ�");
}
*/
/*x
{
	int sum = 0;

	for (int i = 10; i <= 20; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}

	printf("10���� 20 ������ �� �� 3�� ����� ��: %d\n", sum);
}
*/
/*
{
	double sum = 0.0;

	for (int i = 1; i <= 9; i += 2) {
		sum += 1.0 / i;
	}

	printf("1/1 + 1/3 + 1/5 + ... + 1/9�� ��: %.5lf\n", sum);
}
*/
/*
{
	int a, b, c, avg;


	printf("�л��� ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &a);

	printf("ù��° ������ �Է��ϼ��� : ");
	scanf("%d", &b);

	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf("%d", &c);

	avg = (b + c) / 2;

	if (b >= 40 && c >= 40) {
		if(avg >= 60)
			printf("\n�հ�\n");
		else
			printf("\n���հ�\n");
	}
	else
		printf("���հ�");
}
*/

{
	int no, k;
	scanf("%d", &no);

	if (no > 0)
		k = 1;
	else if (no < 0)
		k = 2;
	else
		k = 3;

		switch (k)
		{
		case 1: printf("plus\n");
			break;
		case 2: printf("minus\n");
			break;
		case 3: printf("zero\n");
			break;
		}
}
