#include<stdio.h>
void main(void)
/* //2������
{
	int a, b;
	a = 0;
	b = 0;

	printf("Ȧ�� �� : ");
	for (int i = 11; i < 30; i += 2) {
		a += i;
		printf("%d", i);
		if (i < 29) {
			printf(" + ");
		}
	}
	printf(" = %d\n", a);

	printf("¦�� �� : ");
	for (int i = 10; i <= 30; i += 2) {
		b += i;
		printf("%d", i);
		if (i < 30) {
			printf(" + ");
		}
	}
	printf(" = %d\n", b);

}
*/

 /* //3��
{
	int a, i;

	printf("2, 3, 4�߿� ������ �Է��ϼ���:");
	scanf("%d", &a);

	switch (a) {
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
	default:
		printf("����� �߸� �Է��߽��ϴ�.\n");
	}
}
*/
/*
 //4�� ����
{
	int sum, a;
	sum = 0;

	for (int i = 2; i < 100; i += 2) {
		sum += i;
	}

	printf("1���� 100������ ¦���� �� : %d\n", sum);
}
*/

 /*//5������
{
	double x;
	for (x = 1.0; x < 2.5; x = x + 0.1)
		printf("%19.17f\n", x);
}
*/
/*
{
	double x;
	for (x = 1.0; x <= 2.5; x = x + 0.1)
		printf("%19.17f\n", x);
}
*/
/*//6��
{
	char a, b;
	for (a = '1'; a <= '5'; a++) {
		for (b = '1'; b <= '5'; b++) {
			printf("%c%c ", a, b);
		}
		printf("\n");
	}
}
*/
/* // 7�� ����
{
	int i, j;
	for (j = 1; j < 10; j++) {
		for (i = 2; i < 10; i++) {
			printf("%d * %d = %2d    ", i, j, i * j);
		}
		printf("\n");
	}
}
*/

/* //8������
{
	int i, sum = 0;

	for (i = 50; i <= 150; i++) {
		if ((i % 5) != 0)
			continue;
		else
			sum += i;
	}
	printf("5�� ���= %d\n", sum);
}
*/
/* //9��
{
	int i, j;
	for(i = 2; i <= 4; i++){
		for (j = 1; j < 10; j++){
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
*/
/*//10��
{
	int i, j;
	for (i = 2; i <= 9; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
 */
/* //11�� ����
{
	int i;

	for (i = 1; i <= 20; ++i)
		if ((i % 2 == 0) && (i % 3 == 0))
			printf("%d ", i);
}
*/
 /*// 12�� ����
{
	int i = 0, j = 0;

	while (i++ <= 4)
		printf("%d, ", j = j + i);
	printf("\b\b");
}
*/
/*
{
	int a, b, c, d;

	for(a=1; a<=20; a++)
		for (b = 1; b <= 20; b++)
		{
			if (b < a)
				continue;
			for (c = 1; c <= 20; c++)
			{
				if (c < a) continue;
				d = a * a + b * b;
				if ((c * c) == d)
				printf("%3d %3d %3d\n", a, b, c);
			}
		}
}
*/

{
	int i = 0;

	while (i++ <= 9)
	{
		if (i >= 5 && i <= 7)
			continue;
		printf("%d\n", i);
	}
}
