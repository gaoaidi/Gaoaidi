#include <stdio.h>
int main()
{
	int x,i;
	int isPrime = 1;
	
	printf("����һ�������ж����Ƿ�Ϊ������\n");
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
		printf("���������������");
	} else{
		printf("�������������");
	}
	
	return 0;
}
