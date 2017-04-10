#include<stdio.h>
#include<string.h>

int main(void)
{
	char password[21];
	int i, len;
	printf("Input your password : ");
	gets(password);
	len = strlen(password);
	for (i = 0; i < len; i++)
		printf("%c", password[i]+2);
	printf("\n");
	for (i = 0; i < len; i++)
		printf("%c", (password[i]*7)%80+48);
	return 0;
}
