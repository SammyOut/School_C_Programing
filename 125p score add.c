#include<stdio.h>

int main(void)
{
	int i, j;
	int score[4][2];
	for(i = 0; i <4; i++)
	{
		printf("Input math and programing scores (%d) : ", i+1);
		for (j = 0; j < 2; j++)
		scanf("%d", &score[i][j]);
	}
	for (i = 0; i < 4; i++)
	{
		printf("score sum (%d) : %d\n", i+1, score[i][0]+score[i][1]);
	}
	return 0;
}
	
