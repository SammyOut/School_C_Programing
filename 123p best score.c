#include<stdio.h>

int main(void)
{
	int score[5];
	int i, max = 0;
	for(i = 0; i < 5; i++)
	{
		printf("Score No.%d : ", i+1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (max<score[i])
			max = score[i];
	}
	printf("Best score : %d", max);
	return 0;
}
