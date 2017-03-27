#include <stdio.h>

int main()
{
	int num, i, j, k, star = 1;
	printf("num : ");
	scanf("%d", &num);
	for (i = 0; i<num-1; i++)
	{
		for (j = 0; j<num-i; j++)
		printf(" ");
		for (k = 0; k < star; k++)
		printf("* ");
		printf("\n");
		star ++;
	}
	star = 1;
	for (i = 0; i<num; i++)
	{
		for (k = 0; k < star; k++)
		printf(" ");
		for (j = 0; j<num-i; j++)
		printf("* ");
		printf("\n");
		star ++;
	}
	return 0;
}
