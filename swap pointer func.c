#include<stdio.h>
void f(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	f(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
