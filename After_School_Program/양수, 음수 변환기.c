#include<stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%d", &num1);
	num2 = ~num1+1;
	printf("%d", num2);
	return 0;
}
