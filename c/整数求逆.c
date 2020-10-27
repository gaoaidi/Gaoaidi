#include <stdio.h>
int main()
{
	int number;
	int a,b=0;
	
	scanf("%d",&number);
	
	do
	{
		a=number%10; 
		number=number/10;
//		printf("%d",a);
		b=b*10+a;
	} while (number>0);
	
	printf("%d",b);
	
	return 0;
}
