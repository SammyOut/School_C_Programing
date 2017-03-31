#include<stdio.h>

int main(void)
{
	int i = 0;
	char string1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char string2[] = "World";
	
	while (string1[i] != '\0')
	{
		printf("%c", string1[i]);
		i++;
	}
	printf("\n");
	for (i = 0; i < sizeof(string2)/sizeof(char); i++)
		printf("%c", string2[i]);
	return 0; 
}
