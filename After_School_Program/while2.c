#include<stdio.h>

int main(void)
{
	int num, i = 1;
	scanf("%d", &num);
	while(i < num + 1)
	{
		printf("%d\n", i*3);
		i++;
	}
	return 0;
}
