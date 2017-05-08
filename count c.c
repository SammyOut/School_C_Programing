#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[101];
	int i, c = 0, cc = 0, len;
	
	printf ("문자열 입력 : ");
	gets (str);
	len = strlen(str);
	for (i = 0; i <len; i++)
	{
		if (str[i] == 'c' || str[i] == 'C') 
		{
			c++;
			if(str[i+1] == 'c' || str[i+1] == 'c')
				cc++;
		}
	}
	printf("C의 갯수는 : %d\nCC의 갯수는 : %d", c, cc);
	return 0;
}
