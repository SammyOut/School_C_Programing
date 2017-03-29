#include<stdio.h>

int main(void)
{
	int width, height, s = 0, tmp, i;
	for (i = 1; i < 4; i++)
	{
		printf("Input %d field's width , height : ", i);
		scanf("%d %d", &width, &height);
		tmp = width * height;
		if (tmp>s)
		s = tmp;
	}
	printf("The biggest field's area : %d", s);
	return 0;
}
