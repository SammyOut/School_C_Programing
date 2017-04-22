#include<stdio.h>

int main(void)
{
	int num;
	int i = 0;
	printf("Input your num : ");
	scanf("%d", &num);
	while (i++ < num)
		printf("Hello\n");
	return 0;
}
