#include <stdio.h>
int main()
{
	int i=0,j=0;
	
	for(;i<5;i++){
		for(;j<i+1;j++){
			printf("$");
		}
		j=0;
		printf("\n");
	}
	
	return 0;
}
