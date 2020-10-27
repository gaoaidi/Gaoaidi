#include <stdio.h>
#include <string.h>
#define NAME "MEGATHING, INC"
#define ADDRESS "10 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define LIMIT 65
#define SPACE ' '

void show_n_char (char ch, int num);
int main()
{
	int spaces;
	
	show_n_char('*', LIMIT);
	putchar('\n');
	show_n_char(SPACE, 25);
	printf("%s\n", NAME);
	spaces = (65 - strlen(ADDRESS)) / 2;
	
	show_n_char(SPACE, spaces);
	printf("%s\n", ADDRESS);
	spaces = (65 - strlen(PLACE)) / 2;
	
	show_n_char(SPACE, spaces);
	printf("%s\n", PLACE);
	show_n_char('*', LIMIT);
	
	return 0;
} 
void show_n_char(char ch, int num)
{
	int count;
	for(count=0;count<=num;count++){
		putchar(ch);
	}
}
