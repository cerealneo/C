#include<stdio.h>
void main()
{
	int x;
	float y;
	double z;
	printf("char�� ������ = %d(byte)\n",sizeof(char));
	printf("short�� ������ = %d(byte)\n", sizeof(short));
	printf("int�� ������ = %d(byte)\n", sizeof(int));
	printf("long�� ������ = %d(byte)\n", sizeof(long));
	printf("long long�� ������ = %d(byte)\n", sizeof(long long));
	printf("float�� ������ = %d(byte)\n", sizeof(float));
	printf("double�� ������ = %d(byte)\n", sizeof(double));
	printf("x ������ ������ = %d(byte)\n", sizeof(x));
	printf("y ������ ������ = %d(byte)\n", sizeof(y));
	printf("z ������ ������ = %d(byte)\n", sizeof(z));
}