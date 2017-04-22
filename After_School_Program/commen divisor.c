#include<stdio.h>

int main(void)
{
	int num1, num2, i;
	scanf("%d %d", &num1, &num2);
	for (i = 1; i < num1+1; i++)
		if (num1%i == 0 && num2%i == 0)
			printf("%d ", i);
	return 0;
}
