#include <stdio.h>
struct date{
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today;
	today.month = 10;
	today.day = 23;
	today.year = 2020;

	printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);

	return 0;
}