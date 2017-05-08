#include<stdio.h>

int main(void)
{
	int h, m;
	printf("시간과 분을 입력하세요 : ");
	scanf("%d %d", &h, &m);
	
	if (h >= 0 && m >= 30) printf("%d시 %d분", h, m-30);
	else if(h > 0 && m < 30) printf("%d시 %d분", h-1, m+30);
	else printf("%d시 %d분", 23, m+30);
	return 0;
}
