#include<stdio.h>

int main(void)
{
	int *p;
	int a;
	scanf("%d", &a);
	p = &a;
	printf("%d", p);
	return 0;
}
