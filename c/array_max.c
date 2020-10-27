/* array_max.h to find the biggest number in array*/
#include <stdio.h>
int max(int ar[],int n);
int main()
{
	int n;
	int i;
	printf("$");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	printf("MAX = %d",max(a,n));
//	for(i=0;i<n;i++){
//		printf("%d",a[i]);
//	}
	return 0;
}
int max(int ar[], int n)
{
	int i,j;
	for(i=0,j=0;i<n;i++){
		if(j<ar[i]){
			j = ar[i];
		}
	}
	return j;
}
