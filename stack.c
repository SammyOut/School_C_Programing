#include<stdio.h>
#include<string.h>

int main(void)
{
	int sp = -1, stack[10001], count, num, i, j, result[10001];
	char commend[6];
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%s", commend);
		if (!strcmp(commend, "push"))
		{
			scanf("%d", &num);
			sp++;
			stack[sp] = num;
		}
		else if (!strcmp(commend, "pop"))
		{
			if(sp < 0)
			{
				result[j++] = -1;
				continue;
			}
			result[j++] = stack[sp];
			stack[sp] = 0;
			sp--;
		}
		else if (!strcmp(commend, "size"))
			result[j++] = sp+1;
		else if (!strcmp(commend, "empty"))
			result [j++] = sp == -1? 1 : 0;
	 	else if (!strcmp(commend, "top"))
			result [j++] = sp == -1? -1 : stack[sp];
	}
	for (i = 0; i < j+1; i++)
		if (i < j)
			printf("%d\n", result[i]);
		else
			printf("%d", result[i]);
	return 0;
}
