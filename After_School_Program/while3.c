#include<stdio.h>

int main(void)
{
	char num = 'A';
	while (num <= 'Z')
	{
		printf("%c", num++);
	}
	return 0;
} 
