#include <stdio.h>
enum COLOR {RED, YELLOW, GREEN, NUMCOLORS};
int main(int argc, char const *argv[])
{
	int color = -1;
	char *ColorNames[NUMCOLORS] = {
		"red", "yellow", "green",
	};
	char *colorname = NULL;

	printf("输入你喜欢的颜色的代码： ");
	scanf("%d", &color);
	if(color >=0 && color <NUMCOLORS){
		colorname = ColorNames[color];
	}else{
		colorname = "unknown";
	}
	printf("你喜欢的颜色是%s\n", colorname);
	return 0;
}