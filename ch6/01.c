#include<stdio.h>
void main(void)
/*
{
	int n;

	printf("숫자를 입력하세요:");
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("%d는 짝수입니다.\n", n);
	else
		printf("%d는 홀수입니다.\n", n);
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

	printf("점수를 입력하세요:");
	scanf("%d", &score);

	if (score >= 60)
		printf("합격입니다.\n");
	else
		printf("불합격입니다.\n");
}
*/
/*
{
	int code, radius;
	float pi = 3.14;
	float circle, area;

	printf("코드와 반지름을 입력하세요:");
	scanf("%d %d", &code, &radius);

	if (code == 1)
	{
		area = pi * radius * radius;
		printf("반지름 : %d 원의 면적 : %f\n", radius,area);
	}
	else
	{
		circle = 2 * pi * radius;
		printf("반지름 : %d 원의 둘레 : %f\n", radius, circle);
	}
}
*/
/*
{
	char c, ch;
	printf("1개의 문자를 입력하시오:");

	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
	{
		ch = c - 32;
		printf("%c의 대문자는 %c입니다.\n", c, ch);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		ch = c + 32;
		printf("% c의 소문자는 % c입니다.\n", c, ch);
	}
	else
		printf("%c는 영문자가 아닙니다.\n", c);
}
*/
/*
{
	int score, score1, score2;
	printf("두개의 성적을 입력하시오:");

	scanf("%d %d", &score1, &score2);

	score = (score1 + score2) / 2;

	if (score >= 90)
		printf("%d에 대한 학점은 A입니다.\n", score);
	else if (score >= 80)
		printf("%d에 대한 학점은 B입니다.\n", score);
	else if (score >= 70)
		printf("%d에 대한 학점은 C입니다.\n", score);
	else if (score >= 60)
		printf("%d에 대한 학점은 D입니다.\n", score);
	else
		printf("%d에 대한 학점은 F입니다.\n", score);
}
*/
/*
{
	int height, weight;
	double result;

	printf("신장(cm)를 입력하세요 : ");
	scanf("%d", &height);

	printf("몸무게(kg)를 입력하세요 : ");
	scanf("%d", &weight);

	result = (weight / ((height / 100.0) * (height / 100.0)));

	if (result < 18.5)
	{
		printf("BMI = %.2f\n", result);
		printf("당신은 체중미달 입니다.	\n");
	}
	else if (result >= 18.5 && result < 25.0)
	{
		printf("BMI = %.2f\n", result);
		printf("당신은 적정 체중 입니다.\n");
	}
	else if (result >= 25.50 && result < 30.0)
	{
		printf("BMI = %.2f\n", result);
		printf("당신은	제1도 비만 입니다.\n");
	}
	else if (result >= 30.0 && result < 35.0)
	{
		printf("BMI = %.2f\n", result);
		printf("당신은 제 2도 비만 입니다.\n");
	}
	else if (result >= 35.0 && result < 40.0)
	{
		printf("BMI = %.2f\n", result);
		printf("당신은 제3도 비만 입니다.\n");
	}
	else
	{
		printf("BMI = %.2f\n", result);
		printf("당신은 제4도 비만 입니다.\n");
	}
}
*/
/*
{
	int a;
	printf("숫자를입력하세요(1~4)=>");
	scanf("%d", &a);

	switch (a)
	{
	case 1:printf("서울");
	case 2:printf("부산");
	case 3:printf("대구");
	case 4:printf("광주");
	default:printf("기타도시명");
	}
}
*/
/*
{
	char a;
	int x = 20, y = 10;
	printf("사칙연산자를 입력하세요(+,-,/,*) : ");
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
		printf("연산자 잘못 입력하셨습니다");
	}
}
*/
/*
{
	int no;
	char code;

	printf("코드를 입력하세요(o,h,c 중에 선택):");
	scanf("%c", &code);
	printf("정수를 입력하세요:");
	scanf("%d", &no);

	switch (code) {

	case'o':
		printf("%d의 8진수 = %o\n", no, no);
		break;
	case'h':
		printf("%d의 16진수 = %x\n", no, no);
		break;
	case'c':
		printf("%d의 문자 = %c\n", no, no);
		break;
	default:
		printf("코드를 잘못 입력했습니다.\n");
	}
}
*/
{
	int year, temp;

	printf("출생년도를 입력하세요:");
	scanf("%d", &year);

	temp = year % 12;

	switch (temp) {
	case 0:
		printf("당신의 출생년도 %d는 쥐띠입니다\n", year);
		break;
	}
}