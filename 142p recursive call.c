#include<stdio.h>

int f(int n)
{
	if (n>0)
	{
		f(n-1);
		printf("*");
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
