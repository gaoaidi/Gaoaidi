#include <stdio.h>
int main()
{
	int num;
	int sum = 0;
	_Bool input_is_good;
	printf("Please enter an integer to be summed. ");
	printf("Enter q to quit.\n");
	input_is_good = (scanf("%d",&num)==1);
	while(input_is_good){
		sum += num;
		printf("Please enter an integer to be summed. ");
		printf("Enter q to quit.\n");
		input_is_good = (scanf("%d",&num)==1);
	}
	printf("Those integers sum to %d.\n",sum);
	return 0;
} 
