#include<stdio.h>

int main(void)
{
	while(1)
	{
		int choice, num;
		printf("0. Exit\n1. Octal -> Decimal\n2. Hexadecimal -> Decimal\n3. Decimal -> Hexadecimal\n4. Decimal -> Octal\n5. Hexadecimal -> Octal\n6. Octal -> Hexadecimal\nChoice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 0 :
				
			case 1 :
				printf("Input octal number : ");
				scanf("%o", &num);
				printf("Octal %o = Decimal %d\n", num, num);
				continue;
			case 2 :
				printf("Input hexadecimal number : ");
				scanf("%X", &num);
				printf("Hexadecimal %X = Decimal %d\n", num, num);
				continue;
			case 3 :
				printf("Input decimal number : ");
				scanf("%d", &num);
				printf("Decimal %d = Hexadecimal %X", num, num);
				continue;
			case 4 :
				printf("Input decimal number : ");
				scanf("%d", &num);
				printf("Decimal %d = Octal %o", num, num);
				continue;
			case 5 :
				printf("Input hexadecimal number : ");
				scanf("%X", &num);
				printf("Hexadecimal %X = Decimal %o\n", num, num);
				continue;
			case 6 :
				printf("Input octal number : ");
				scanf("%o", &num);
				printf("Octal %o = Hecadecimal %X\n", num, num);
				continue;
		}
	}
}
