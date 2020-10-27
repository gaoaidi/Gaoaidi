#include <stdio.h>
int main()
{
	char c[6]="FEDCBA";
	int i=0,j=0;
	for(;i<6;i++){
		for(;j<i+1;j++){
			printf("%c",c[j]);
		}
		j=0;
		printf("\n");
	}
	return 0;
}
