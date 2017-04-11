#include<stdio.h>

int main(void)
{
	int num1, num2;
	printf("num1 : ");
	scanf("%d", &num1);
	printf("num2 : ");
	scanf("%d", &num2);
	
	num1>num2? printf("%d", num1-num2) : printf("%d", num2-num1);
	return 0;
}
