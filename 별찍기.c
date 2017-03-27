#include <stdio.h>

int main(void)
{
	int i, j, num, star;
	printf("num : ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = num; j > i; j--)
			printf(" ");
		for (star = 0; star<=i; star++)
			printf("* ");
		printf("\n");
	}	
	return 0;
}