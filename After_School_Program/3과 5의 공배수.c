#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	if (num%15 == 0 && num !=0)
		printf("num is 5 and 3's multiple");
	else 
		printf("num isn't 5 and 3's multiple");
	return 0;
} 
