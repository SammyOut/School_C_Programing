#include<stdio.h>

int main(void)
{
	int *p, i;
	int a[5] = {100, 78, 95, 66, 96};
	p = a;
	for (i = 0; i < 5; i++)
		printf("%d", a[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%d", *(p+i));
	return 0;
}
