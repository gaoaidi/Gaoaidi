#include <stdio.h>

int main()
{
	int x,i,y=1;
	
	printf("����һ������������׳ˡ�\n");
	scanf("%d",&x);
	
	for ( i=1; i<=x; i++){
		y = y *i;
//		printf("y = %d\n",y);
	}
	printf("%d��= %d",x,y);
	
	return 0;
}

 
