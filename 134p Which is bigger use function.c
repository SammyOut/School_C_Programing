#include<stdio.h>

int f(int a, int b)
{
	if (a<b) return a;
	else return b;
}

int main(void)
{
	int a, b;
	scnaf("%d %d", &a, &b);
	printf("%d", f(a,b));
	return 0;
}
