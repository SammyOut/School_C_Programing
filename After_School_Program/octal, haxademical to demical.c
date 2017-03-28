#include<stdio.h>

int main(void)
{
	while(1)
	{
		int choice, num;
		printf("1. octal -> demical\n2. hexademical -> demical\nChoice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1 :
				printf("Input octal number : ");
				scanf("%o", &num);
				printf(" Octal %o = Demical %d\n", num, num);
				continue;
			case 2 :
				printf("Input hexademical number : ");
				scanf("%X", &num);
				printf(" Hexademical %X = Demical %d\n", num, num);
				continue
			default :
				continue;
				
		}
	}
}
