#include<stdio.h>
#include<string.h>

int main(void)
{
	int sp = -1, stack[10001], count, num, i, result[10001];
	char commend[10];
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
				printf("%d\n", -1);
				continue;
			}
			printf("%d", stack[sp]);
			stack[sp] = 0;
			sp--;
		}
		else if (!strcmp(commend, "size"))
			printf("%d", sp+1);
		else if (!strcmp(commend, "empty"))
			printf("%d",sp==-1? 1 : 0);
	 	else if (!strcmp(commend, "top"))
			printf("%d",sp==-1? -1 : stack[sp]);
		if (i != commend-1 && strcmp(commend, "push"))
			printf("\n");
	}
	return 0;
}
