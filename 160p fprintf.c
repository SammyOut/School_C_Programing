#include<stdio.h>

int main(void)
{
	FILE *fp1 = fopen("C:\\Users\\dsm2017\\Desktop\\file.txt", "w");
	fprintf(fp1, "우아아아아아 어지러웡요어오오오오오 너무 너무 어지러웡요요오오오ㅗ오오");
	fclose(fp1);
	return 0; 
}
