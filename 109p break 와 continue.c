#include <stdio.h>

int main(void)
{
	int num;
	while (1)
	{
		printf("num : ");
		scanf("%d", &num);
		if (num<0) break;
		if (num==0) continue;
		if (num%2==0) printf("even number\n");
		else printf("odd number\n");
	}
	return 0;
}
