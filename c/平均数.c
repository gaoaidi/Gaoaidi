#include <stdio.h>
int main()
{
	int count = 0;
	int sum = 0;
	int number;
	
	scanf("%d",&number);
	while (number != 0){
		sum = sum + number;
		count++;
		scanf("%d",&number);
	}
	printf("sum = %d, average = %f",sum,1.0*sum/count);
	
	return 0;
} 
