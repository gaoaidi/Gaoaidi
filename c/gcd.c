/*
a	b	t
16	18	16
18	16	2
16	2	8
2	8	2
8	2	0
*/

#include <stdio.h>
int main(){
	int a,b;
	int t;
	
	scanf("%d %d",&a,&b);
	
	int origa=a,origb=b;
	
	while (b != 0){
		t = a%b;
		a = b;
		b = t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	
	printf("%d和%d的最大公约数是%d.\n",origa,origb,a);
	
	return 0;
}
