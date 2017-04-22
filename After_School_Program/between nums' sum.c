#include<stdio.h>

int main(void)
{
	int num1, num2, sum = 0, i;
	scanf("%d %d", &num1, &num2);
	for (i = num1; i < num2+1; i++)
		sum+=i;
	printf("%d", sum);
	return 0;
}
