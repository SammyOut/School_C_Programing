#include<stdio.h>

int main(void)
{
	int num1, num2, i, tmp;
	printf("Input two numbers : ");
	scanf("%d %d", &num1, &num2);
	if (num2<num1)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	 } 
	 for (i = num1; i<=num2; i++)
	 	printf("%d ",i);
	 return 0;
}
