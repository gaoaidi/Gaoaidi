#include <stdio.h>
int main()
{
	int x,i;
	int isPrime = 1;
	
	printf("输入一个数，判断其是否为质数。\n");
	scanf("%d",&x);

	for ( i=2; i<x; i++){
		if ( x%i==0 ){
		isPrime = 0;
		break;
		}
	}
	
	if ( x==1 ){ 
		isPrime = 0;
	}
	
	if (isPrime==0){
		printf("这个数不是质数。");
	} else{
		printf("这个数是质数。");
	}
	
	return 0;
}
