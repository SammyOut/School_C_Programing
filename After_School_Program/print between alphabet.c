#include<stdio.h>

int main(void)
{
	int i;
	char ch1, ch2;
	scanf("%c %c", &ch1, &ch2);
	for (i = ch1; i < ch2+1; i++)
		printf("%c", i);
	return 0;
}
