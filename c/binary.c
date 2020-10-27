#include <stdio.h>
void to_binary(int n);
int main()
{
	int number;
	printf("ENTER a integer(q to quit):");
	while(scanf("%d",&number) == 1){
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("ENTER a integer(q to quit):");
	}
	printf("DONE.");
	return 0;
} 
void to_binary(int n)
{
	int r;
	r = n % 2;
	if(n>=2){
		to_binary(n / 2);
	}
	printf("%d",r);
	return;
} 
