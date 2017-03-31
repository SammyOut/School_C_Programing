#include<stdio.h>

int main(void)
{
	char string1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char string2[] = "World";
	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s %s", string1, string2);
	return 0;
}
