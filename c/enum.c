#include <stdio.h>

enum COLOR {RED, YELLOW, GREEN,COLOR_NUM};

int main(int argc, char const *argv[])
{
	int color = -1;
	char *colorname[COLOR_NUM] ={
		"RED",
		"YELLOW",
		"GREEN",
	} ;
	printf("输入你喜欢的颜色代码:");
	scanf("%d",&color);
	printf("你喜欢的颜色是:%s\n", colorname[color]);
	return 0;
}