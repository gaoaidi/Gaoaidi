#include <stdio.h>
int main(int argc, char const *argv[])
{
	int month;
	scanf("%d",&month);
	char *m[12] = {
		"January", "February", "March", "April", "May", "June", "July", "August", 
		"September", "October", "November", "December" 
	};
	printf("%s\n", m[month-1]);
	return 0;
}