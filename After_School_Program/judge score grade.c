#include<stdio.h>

int main(void)
{
	int score;
	printf("score : ");
	scanf("%d", &score);
	if (score >= 90)
		printf("soo");
	else if (score >= 80)
		printf("woo");
	else if (score >= 70)
		printf("mi");
	else if (score >= 60)
		printf("yang");
	else
		printf("ga");
	return 0;
}
