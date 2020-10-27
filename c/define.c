#include <stdio.h>
#define HOUR 60
int main()
{
	int t;
	int h,m;
	printf("请输入分钟数:");
	scanf("%d",&t);
	while(t>0){
		h = t/HOUR;
		m = t%HOUR;
		printf("hour=%d,minute=%d\n",h,m);
		printf("请输入分钟数:");
		scanf("%d",&t);
	}
} 
