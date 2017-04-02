#include<stdio.h>

int main(void)
{
	int a = 0, i;
	int string[8];
	for (i = 0; i < 8; i++)
		scanf("%d", &string[i]);
	for (i = 0; i < 7; i++)
	{
		if (string[i + 1] - string[i] == 1)
			a++;
		else if (string[i] - string[i + 1] == -1)
			a--;
	}
	if (a == 7)
		printf("ascending");
	else if (a == -7)
		printf("descending");
	else
		printf("mixed");
	return 0;
}