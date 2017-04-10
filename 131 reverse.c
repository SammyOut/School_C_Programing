#include<stdio.h>
#include<string.h>

int main(void)
{
	char string[1000];
	int i, cnt;
	gets(string);
	for (i = 0; string[i] != '\0'; i++)
	{
		cnt = i;
	}
	for (i = cnt; i>-1; i--)
		printf("%c", string[i]);
	return 0;
}
