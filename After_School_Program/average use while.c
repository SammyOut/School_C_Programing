#include<stdio.h>

int main(void)
{
	int cnt, i = 0, num, sum = 0;
	scanf("%d", &cnt);
	while (i < cnt)
	{
		scanf("%d", &num);
		sum+=num;
		i++;
	}
	printf("%.2f", (float)sum/cnt);
	return 0;
}
