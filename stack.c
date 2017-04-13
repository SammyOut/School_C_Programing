#include<stdio.h>
#include<string.h>

int main(void)
{
	int sp = -1, stack[10001], commend[10], count, num, i;
	for (i = 0; i < count; i++)
	{
		scnaf("%s", commend);
		if (!strcmp(commend, "push"))
		{
			scanf("%d", &num);
			sp++;
			stack[sp] = num;
		}
		else if (!strcmp(commend, "pop"))
		{
			printf("%d\n", stack[sp]);
			stack[sp] = 0;
			sp--;
		}
		else if (!strcmp(commend, "size"))
			printf("%d\n", sp+1);
		else if (!strcmp(commend, "empty"))
			printf("%d\n",sp==-1? 1 : 0);
		else if (!strcmp(commend, "top"))
			printf("%d\n",sp==-1? -1 : stack[sp]);
	}
	return 0;
}
