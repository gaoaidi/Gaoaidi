#include <stdio.h>
int main()
{
	int score;
	const int PASS=60;
	printf("Your score:");
	scanf("%d",&score);
	if ( score < PASS )
		printf("Sorry.You failed this exam.\n");
	else
		printf("Congratulation.You passed this exam.\n");
	printf("Have a nice day.");
	return 0;
}
