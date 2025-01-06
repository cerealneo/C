#include<stdio.h>
void main(void)
/* 예제
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

	printf("두개의 정수를 입력하세요:");
	scanf("%d%d", &a, &b);

	printf("두개의 실수를 입력하세요:");
	scanf("%f%f", &c, &d);

	printf("a = %d b = %d\n", a, b);
	printf("c=%.2f d = %f\n", c, d);
}
*/
/* 4-2번
{
	double dnum;
	float fnum;

	printf("실수(double형)를 입력하시오:");
	scanf("%lf", &dnum);
	printf("실수(float형)를 입력하시오:");
	scanf("%f", &fnum);

	printf("\n입력한 값의 출력 리스트\n");
	printf("double형의 값 : %.10f\n", dnum);
	printf("float형의 값 :  %.10f\n", fnum);
}
*/
/* 4-3번
{
	char a, b, c, d;

	printf("두 문자를 입력하세요:");
	scanf("%c%c", &a, &b);

	printf("두 문자를 입력하세요:");
	scanf("%*c%c%c", &c, &d);

	printf("%c%c\n", a, b);
	printf("%c%c\n", c, d);
}
*/
/* 4-4번
{
	int a;
	printf("1문자를 입력하세요=>");
	a = getchar();
	putchar(a);
}
*/
/* 4-5번
{
	char str[8];
	int num1, num2;
	scanf("%s%d", str, &num1);
	scanf("%*d%d", &num2);

	printf("%s %d\n", str, num1);
	printf("%d\n", num2);
}
*/
/* 4-6번
{
	char str[8];

	printf("1문자열을 입력하세요=>");
	gets(str);
	puts(str);

	printf("1문자열을 입력하세요=>");
	scanf("%s", str);
	puts(str);
}
*/
/* 4-8번
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

	printf("두 문자를 입력하세요:");
	scanf("%s", &a);

	printf("두 문자를 입력하세요:");
	scanf("%*s%s", &b);

	printf("%s\n", a);
	printf("%s\n", b);
}