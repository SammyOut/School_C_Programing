#include<stdio.h>

int main(void)
{
	char gender;
	int age;
	printf("Are you male or female? (F or M) : ");
	scanf("%c", &gender);
	printf("How old are you? : ");
	scanf("%d", &age);
	
	if (gender == 'F')
	{
		if (age >19)
			printf("Adult Female");
		else
			printf("Under age Female");
	}
	else
	{
		if (age > 19)
			printf("Adult Male");
		else
			printf("Under age Male");
	}
	return 0;
}
