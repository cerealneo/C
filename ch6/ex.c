#include<stdio.h>
void main()
/*//1번
{
	int x, y;
	char a;

	printf("x = ");
	scanf("%d", &x);

	printf("y = ");
	scanf("%d", &y);

	printf("사칙 연산자를 입력하세요(+, -, /, *): ");
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
		printf("잘못 입력하였습니다");
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

	printf("10에서 20 사이의 수 중 3의 배수의 합: %d\n", sum);
}
*/
/*
{
	double sum = 0.0;

	for (int i = 1; i <= 9; i += 2) {
		sum += 1.0 / i;
	}

	printf("1/1 + 1/3 + 1/5 + ... + 1/9의 합: %.5lf\n", sum);
}
*/
/*
{
	int a, b, c, avg;


	printf("학생의 번호를 입력하세요 : ");
	scanf("%d", &a);

	printf("첫번째 점수를 입력하세요 : ");
	scanf("%d", &b);

	printf("두번째 점수를 입력하세요 : ");
	scanf("%d", &c);

	avg = (b + c) / 2;

	if (b >= 40 && c >= 40) {
		if(avg >= 60)
			printf("\n합격\n");
		else
			printf("\n불합격\n");
	}
	else
		printf("불합격");
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
