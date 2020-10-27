#include <stdio.h>
#define MONTH 12
int main()
{
	int days[MONTH] = {31,28,31,30,31,31,30,31,30,31,30,31};
	int index;
	
	for (index=0;index<MONTH;index++){
		printf("MONTH %2d has %d days.\n",index+1,*(days + index));
	} 
	return 0;
}
