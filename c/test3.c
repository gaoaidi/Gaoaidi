#include <stdio.h>
int main()
{
	int nights;
	
	printf("How many nights are needed?\n");
	while((scanf("%d",&nights)) != 1){
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}
	return 0;
}
