#include<stdio.h>

int fac(int n)
{
	if (n = 1) return 1;
	return n*fac(n-1);
}

int main(void)
{
	int i, n;
	scanf("%d", &n);
	printf("%d ", fac(n));
	return 0;
}
