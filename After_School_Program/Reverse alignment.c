#include<stdio.h>

int main(void)
{
	int num [3], i, j, tmp;
	for (i = 0; i < 3; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
		{
			if (num[j] < num[j+1])
			{
				tmp = num[j];
				num[j] = num[j+1];
				num[j+1] = tmp;
			}
		}
	for (i = 0; i < 3; i++)
		printf("%d ", num[i]);
		return 0;
}
