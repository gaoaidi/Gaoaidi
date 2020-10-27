#include <stdio.h>
int main()
{
	int i,n;
	double sum=0.0;
	int sign = 1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum += 1.0*sign/i;
		sign = -sign;
	}
	printf("sum=%f\n",sum);
	
	return 0;
}
