#include<stdio.h>

int main(void)
{
	FILE *fp1 = fopen("out.txt", "r");
	FILE *fp2 = fopen("out2.txt", "w");
	int n;
	fscanf(fp1, "%d", &n);
	fprintf(fp2, "%d\n", n+1);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
