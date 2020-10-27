#include <stdio.h>
int main()
{
	int x = 0;
	int n = 1;
	
	printf("输入一个数\n");
	scanf("%d",&x);
	
	if ( x > 9999 ){
		n = 5;
	} else if ( x > 999 ){
		n = 4; 
	} else if ( x > 99 ){
		n = 3;
	} else if ( x > 9 ){
		n = 2;
	}
	
	printf("%d",n);
	
	return 0;
}
