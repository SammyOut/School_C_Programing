#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	//num >= 0? printf("%d", num) : printf("%d", -num);
	num = (num>=0)? num : -num;
	printf("%d", num);
	return 0;
}
