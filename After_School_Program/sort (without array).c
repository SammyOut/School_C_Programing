#include<stdio.h>
void swap (int *a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int compare (int num1, int num2, int num3)
{
	if (num1 > num2)
		swap (&num1, &num2);
	if (num1 > num3)
		swap (&num1, &num3);
	if (num2 > num3)
		swap (&num2, &num3);
	return printf("%d %d %d", num1, num2, num3);	
}
int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	
	compare (num1, num2, num3);
	return 0;
}

/* 
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
			printf("%d %d %d", num1, num2, num3);
		else
			printf("%d %d %d", num1, num3, num2);
	}
	if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
			printf("%d %d %d", num2, num1, num3);
		else
			printf("%d %d %d", num2, num3, num1);
	}
	else
	{
		if (num1 > num2)
			printf("%d %d %d", num3, num1, num2);
		else
			printf("%d %d %d", num3, num2, num1);
	}
	return 0;
}
*/
