#include <stdio.h>

int main(void)
{
	int num, i, j;
	printf("num : ");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++)
	{
		for(j = 0; j<i; j++)
			printf("* ");
		printf("\n");
	}
	
	for (i = num; i > 0; i--)
	{
		for (j = 0; j < i; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}