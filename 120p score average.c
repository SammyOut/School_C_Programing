#include<stdio.h>

int main(void)
{
	int score [5];
	int i, sum = 0;
	for (i = 0; i<5; i++)
	{
		printf("Input score %d : ", i+1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
		sum+=score[i];
	printf("sum : %d", sum);
	printf("average : %.2lf", (double)sum/5);
	return 0;
}
