#include<stdio.h>

int main(void)
{
	int a, b, i, tmp;
	printf("Input two numbers : ");
	scanf("%d %d", &a, &b);
	if (b<a)
	{
		tmp = a;
		a = b;
		b = tmp;
	 } 
	 for (i = a; i<=b; i++)
	 	printf("%d ",i);
	 return 0;
}
