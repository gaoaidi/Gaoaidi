#include <stdio.h>
int main()
{
	int x,n=0;
	
	scanf("%d",&x);
	
	if ( x < 0 ) {
		x = -x;
	}
	
	n++;
	x /= 10;
	while (x > 0){
		n++;
		x /= 10;
	}
	
	printf("%d",n);
	
	return 0; 
}
