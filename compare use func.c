#include<stdio.h>

int f(int a, int b)
{
	if (a<b) return b;
	else return a;
}
int main(void)
{
	int score[10] = {10, 8, 77, 68, 54, 99, 15, 56, 97, 64, 48};
	int i, max = 0;
	for(i = 0; i < 10; i++)
		max = f(max, score[i]);
	printf("%d", max);
	return 0;
}
