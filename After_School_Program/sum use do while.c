#include<stdio.h>

int main(void)
{
	int sum = 0, num;
	do
	{
		printf("num : ");
		scanf("%d", &num);
		sum+=num;
		printf("sum : %d\n", sum);
	}while (num != 0);
	return 0;
}
