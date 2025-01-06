#include<stdio.h>
void main()
{
	int x;
	float y;
	double z;
	printf("char형 사이즈 = %d(byte)\n",sizeof(char));
	printf("short형 사이즈 = %d(byte)\n", sizeof(short));
	printf("int형 사이즈 = %d(byte)\n", sizeof(int));
	printf("long형 사이즈 = %d(byte)\n", sizeof(long));
	printf("long long형 사이즈 = %d(byte)\n", sizeof(long long));
	printf("float형 사이즈 = %d(byte)\n", sizeof(float));
	printf("double형 사이즈 = %d(byte)\n", sizeof(double));
	printf("x 변수의 사이즈 = %d(byte)\n", sizeof(x));
	printf("y 변수의 사이즈 = %d(byte)\n", sizeof(y));
	printf("z 변수의 사이즈 = %d(byte)\n", sizeof(z));
}