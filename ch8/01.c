#include<stdio.h>
void main(void)
/*
{
	int i;

	for(i=0; i<10; i++)
	printf("���� �̹μ��̴�\n");
}
*/
/*
{
	int a = 1, sum = 0;

	while (a <= 10)
	{
		sum = sum + a;
		a = a + 1;
	}
	printf("1 + 2 + ..... + 10 = % d\n", sum);
}
*/
/*
{
	int n;
	int sum = 0;

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &n);

	while (n > 0)
	{
		sum += n;

		printf("���ڸ� �Է��ϼ���:");
		scanf("%d", &n);
	}
	printf("sum=%d\n", sum);
}
*/
/*
{
	int a;
	while ((a = getchar()) != -1)
	{
		if (a != '\n')
		{
			if (a > 64 && a < 91)
				a = a + 32;
			else
				a = a - 32;
		}
		putchar(a);
	}
}
*/
/*
{
	int gu;
	int i;
	i = 1;

	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &gu);

	while (i < 10 && i++) {
		printf("%d * %d = %d\n", gu, i, gu * i);
	}

}
*/
/*
{
	int a = 0, sum = 0;

	do
	{
		a++;
		sum = sum + a;
	} while (a < 10);

	printf("1 + 2 + ... + 10 = %d\n", sum);
}
*/
/*
{
	int a, b;

	a = b = 0;

	do {
		++a;
		b += a;
	} while (b < 500);
	printf("a = % d b = % d\n", a, b);
}
*/
/*
{
	int sum, i;
	sum = 0;
	for (i = 2; i <= 10; i = i + 2)
		sum += i;

	printf("2 + 4 + ... + 10 = %d\n", sum);
}
*/
/*
{
	int i;
	int sum;

	for (i = 1, sum = 0; i <= 10; sum += i, i++);
	printf("1 + 2 + ... + 10 = %d\n", sum);
}
*/
/*
{
	int a, i;

	printf("2, 3, 4�߿� ������ �Է��ϼ���:");
	scanf("%d", &a);

	switch (a){
	case 2:
		for (i = 1; i <= 10; i++)
			if (i % 2 == 0) printf("%d ", i);
		printf("\n");
		break;
	case 3:
		for (i = 1; i <= 10; i++)
			if (i % 3 == 0) printf("%d ", i);
		printf("\n");
		break;
	case 4:
		for (i = 1; i <= 10; i++)
			if (i % 4 == 0) printf("%d ", i);
		printf("\n");
		break;
	default :
		printf("����� �߸� �Է��߽��ϴ�.\n");
	}
}
*/
/*
{
	int i, j;

	for (i = 2; i <= 20; i++)
	{
		j = 2;
		while (((i % j) != 0) && (j < i))
			j++;
		if (j == i) printf("%2d ", i);
	}
}
*/
/*
{
	int a = 0, b = 0;
	while (a++, a <= 5)
	{
		while (b++, b <= 5)
			printf("%3d", a * b);
		b = 0;
		printf("\n");
	}
}
*/
/*
{
	int data[10];
	int i, n = 0;

	while (!(scanf("%d", &data[n]) == -1))
		n++;
	for (i = 0; i < n; i++)
		printf("%d,", data[i]);
}
*/
/*
{
	int i, j, x;

	for(i=1;i<=4;i++)
		for (j = 1; j <= 4; j++)
		{
			x = i + j;
			if (x != 6)
				continue;
			printf("%2d + %2d = %2d\n", i, j, x);
		}
}
*/
/*
{
	int i = 0, count;

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &count);

	for (;;)
	{
		printf("i = %d\n", i);
		i++;

		if (i >= count)
			break;
	}
}
*/
/*
{
	int ans, endKey = 0;

	while (1)
	{
		printf("-----�޴�-----\n");
		printf("0:����\n");
		printf("1:����\n");
		printf("2:����\n");
		printf("-----------------\n");

		printf("����=> ");
		scanf("%d", &ans);

		switch (ans)
		{
		case 0: endKey = 1;
			break;
		case 1: printf("������ ����\n");
			break;
		case 2: printf("������ ����\n");
			break;
		default: printf("�߸��Է�\n");
			break;
		}
		if (endKey)
		{
			printf("���α׷� ����\n");
			break;

		}
	}
}
*/
{
	int i, num, sum = 0;

	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &num);

	for (i = 0; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		sum = sum + i;
		printf("%d + ",i);
	}
	printf("\b\b = %d\n", sum);
}
