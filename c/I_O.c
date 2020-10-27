#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("%9d\n", 123);
	printf("%-9d\n", 123);
	printf("%+9d\n", 123);
	printf("%09d\n", 123);
	printf("%*d\n",123,456);
	return 0;
}