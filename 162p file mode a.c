#include<stdio.h>

int main(void)
{
	FILE *fp3 = fopen("out3.txt", "a");
	fprintf(fp3, "Hello!\n");
	close(fp3);
	return 0;
}
