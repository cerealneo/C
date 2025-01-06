#include<stdio.h>
void main(void)
/*
{
	int i, test[5];

	printf("5개의 성적을 입력하세요.\n");
	for (i= 0; i < 5; i++) {
		scanf("%d", &test[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%d번째의 점수는 %d입니다.\n", i, test[i]);
	}
}
*/
/*
{
	int i, j, temp, a[5];
	int x;
	for (i = 0; i < 5; i++) {
		printf("입력데이터 a[%d]=", i);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}
		}
		for (x = 0; x < 5; x++) {
			printf("a[%d] = %d ", x, a[x]);
		}
		printf("\n");
	}
}
*/
/*
{
	int test[6] = { 70,50,60,90,80,40 };

	int ave, i, sum = 0;

	for (i = 0; i<= 5; ++i) {
		sum += test[i];
	}
	ave = sum / 6;
	printf("sum = %d ave = %d\n", sum, ave);
}
*/
/*
{
	int a, b;
	int test[3][4] = { {90,75,80,68},
		{85,75,80,78},
		{99,67,86,91} };

	for (a = 0; a < 3; a++) {
		for (b = 0; b < 4; b++) {
			printf("%5d ", test[a][b]);
		}
		printf("\n");
	}
}
*/
/*
{
	int a;
	int test[3][4]= { {90,75,80,68},
		{85,75,80,78},
		{99,67,86,91} };

	int sum[3];
	sum[0] = test[0][0] + test[0][1] + test[0][2] + test[0][3];
	sum[1] = test[1][0] + test[1][1] + test[1][2] + test[1][3];
	sum[2] = test[2][0] + test[2][1] + test[2][2] + test[2][3];

	for (a = 0; a < 3; a++) {
		printf("%d\n", sum[a]);
	}
}
*/
/*
{
	int test[2][3] = { 70,50,60,90,80,40 };
	int i, j, sum = 0;

	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 3; ++j) {
			sum += test[i][j];
			printf("%d ", test[i][j]);
		}
		printf("\n");
	}
	printf("\n2차원 배열 요소의 합 = %d\n", sum);
}
*/
/*
{
	int a[2][2] = { 10,20,30,40 };
	int b[2][2] = { 50,60,70,80 };
	int i, j;
	int c[2][2];

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}
}
*/
/*
{
	int i, j;
	int subject[5][6] = { { 1, 20, 16, 34, 25 },
		{2,40,1,30,15},
		{3,10,56,50,35},
		{4,30,12,20,16},
		{5,16,25,20,13} };

	for (i = 0; i < 5; i++)
		for (j = 1; j < 5; j++)
			subject[i][5] = subject[i][5] + subject[i][j];

	printf("  번호  C   자바  C#  C++  합계\n");
	printf("--------------------------------\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%5d", subject[i][j]);
		printf("\n");
	}
}
*/
/*
{
	int i, j, sum;
	double avg;
	int subject[4][3];

	for (i = 0; i < 4; i++) {
		printf("3과목의 점수를 입력하세요: ");
		for(j=0;j<3;j++)
			scanf("%d", &subject[i][j]);
	}
	printf("\n\n과목1  과목2  과목3  합계   평균\n");
	printf("--------------------------------\n");
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += subject[i][j];
		avg = sum / 3.0;
		printf("%5d %5d %5d %5d %8.2f\n", subject[i][0], subject[i][1],
			subject[i][2], sum, avg);
	}
}
*/
/*
{
	char a[7] = "PERSON";
	printf("%s\n", a);
	printf("%c %c %c %c %c %c\n", a[0], a[1], a[2],
		a[3], a[4], a[5]);
}
*/
/*
{
	int i;
	char a[2][5] = { 'S', 'e', 'o', 'u', 'l', 'P', 'u', 's', 'a', 'n' };
	for (i = 0; i < 2; ++i)
		printf("%c%c%c%c%c\n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], a[i][5]);
}
*/
{
	int i;
	char a[7] = {'H', 'e', 'l', 'l', 'o', '\0' };
	printf("%s\n", a);
	printf("%c %c %c %c %c\n", a[0], a[1], a[2], a[3], a[4]);
}