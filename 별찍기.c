#include <stdio.h>

int main(void)
{
	int i, j, star;
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > i; j--)
			printf(" ");
		for (star = 0; star<=i; star++)
			printf("¡Ú");
		printf("\n");
	}	
	return 0;
}