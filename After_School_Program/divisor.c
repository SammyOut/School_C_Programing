#include<stdio.h>

int main(void)
{
	int num, i;
	scanf("%d", &num);
	for (i = 1; i < num+1; i++)
		if (num%i == 0)
			printf("%d ", i);
	return 0;
}
