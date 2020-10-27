#include <stdio.h>
int main()
{
	char c[26];
	int i;
	for(i=0;i<26;i++){
		c[i]=i+65;
		printf("%c",c[i]);
	}
	return 0;
}
