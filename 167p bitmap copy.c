#include<stdio.h>
#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54
unsigned char R[HEIGHT][WIDTH], G[HEIGHT][WIDTH], B[HEIGHT][WIDTH];

int main(void)
{
	FILE *fp1 = fopen("bitmap.png", "rb");
	FILE *fp2 = fopen("bitmap2.png", "wb");
	int i, j;
	for (i = 0; i < HEADER; i++)
		putc(getc(fp1), fp2);
	
	for (i = 0; i < HEIGHT; i++)
		for(j = 0; j < WIDTH; j++)
		{
			B[i][j] = getc(fp1); G[i][j] = getc(fp1); R[i][j] = getc(fp1);
		}
	
	for (i = 0; i < HEIGHT; i++)
		for (j = 0; j < WIDTH; j++)
		{
			putc(B[i][j], fp2); putc(G[i][j], fp2); putc(R[i][j], fp2);
		}
		return 0;
}
