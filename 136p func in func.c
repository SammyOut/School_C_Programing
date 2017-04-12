#include<stdio.h>

int f(int a, int b)
{
	if (a>b) return a;
	else return b;
}

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", f(a, f(b, c)));
	return 0;
}
