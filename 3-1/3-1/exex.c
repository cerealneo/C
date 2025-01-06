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
	//문자형 a, b를 선언한다
	unsigned char c; 
	//부호없는 텍스트 c를 선언한다

	a = 'A';
	//a에 'A'를 저장한다
	b = a + 1;
	//b에 a+1값을 저장한다
	printf("a = %c = %d, b = %c = %d\n", a, a, b, b);
	//printf로 a= 아스키코드 "A"와 변수값인 아스키 코드 값 (65)을 출력하고
	//b는 A+1인 아스키 코드 "B"와 변수값인 아스키 코드 값 66이 출력된다 
	b = 36;
	//b에 36을 저장한다
	c = 75;
	//c에 75를 저장한다.
	printf("a = %c = %d, b = %c = %d\n", b, b, c, c);
	//printf로 36의 아스키코드 $와 코드값 36을 출력하고
	//b는 75의 아스키코드 K와 코드값 75를 출력한다.
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