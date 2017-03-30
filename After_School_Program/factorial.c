#include<stdio.h>

int factorial(int num)
{
	static int result = 1;
	if (num == 0 )
		return result;
	result *= num;
	num--;
	factorial (num);
		
}

int main(void)
{
	int num, result;
	printf("n : ");
	scanf("%d", &num);
	result = factorial(num);
	printf("%d", result);
	return 0;
}
