#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main()
{
	char c;
	char prev;
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	_Bool inword = false;
	
	printf("Enter next to be analyzed(| to terminate):\n");
	prev = '\n';
	while ((c=getchar()) != STOP){
		n_chars++;
		if(c == '\n'){
			n_lines++;
		}
		if(!isspace && !inword){
			inword = true;
			n_words++;
		}
		if(isspace && inword){
			inword = false;
		}
		prev = c;
	}
	if(prev !='\n'){
		p_lines = 1;
	}
	printf("charactors = %d, words = %d, lines = %d,",
		n_chars, n_words, n_lines);
	printf("partical lines = %d",p_lines);
	return 0;
} 

