#include <stdio.h>
int main()
{
	int hour1,min1;
	int hour2,min2;
	int ih,im;
	
	printf("Pleace tap two time.\n");
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	ih = hour1 - hour2;
	im = min1 - min2;
	if (im<0){
		im = 60 + im;
		ih -= 1;
	}
	printf("%d h, %d min",ih,im);
	return 0;
} 
