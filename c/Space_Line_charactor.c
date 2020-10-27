#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main()
{
	int n_space=0;
	int n_line=0;
	int n_charactor=0;
	char ch;
	while((ch = getchar()) != STOP){
		if(ch == '\n'){
			n_line++;
		}
		if(ch == ' '){
			n_space++;
		}
		if(isalpha(ch)){
			n_charactor++;
		}
	}
	printf("charactor=%d, space=%d, line=%d",
		n_charactor, n_space, n_line);
	return 0;
}
