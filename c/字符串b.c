#include <stdio.h>
#define PRAISE "What a super marvelous name!"
int main()
{
	char name[20];
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello, %s. %s\n",name,PRAISE);
	
//	char word[20] = "word.";
//	printf("%s",word); 
	return 0;
}
