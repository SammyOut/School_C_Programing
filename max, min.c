#include<stdio.h>

int main(void)
{
	int n, i, score, min = 100, max = 0;
	printf("학생 수 입력 : ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("점수 입력 : ");
		scanf("%d", &score);
		if(min > score) min = score;
		else if(max < score) max = score; 
	}
	printf("1등 : %d, 꼴찌 : %d", max, min);
	return 0;
}
