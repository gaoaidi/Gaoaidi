#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char word[] = {'H','e','l','l','o','!','/0'};
	for(i=0;i<sizeof(word)/sizeof(word[0]);i++){
		printf("%c",word[i]);
	}
}
