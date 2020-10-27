#include <stdio.h>
int main()
{
	int x,cnt=1,signx;
	int t=1;
	scanf("%d",&x);
	signx = x;
	while (x/t>9)
	{
		t = t *10;
		cnt++;
//		printf("cnt=%d\n",cnt); 
	}
	while (t>0){
		printf("%d ",x/t);
		x = x%t;
		t = t/10;
	}
}
