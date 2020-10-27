#include <stdio.h>
int f(void);
int main(int argc, char const *argv[])
{
	f();
	f();
	f();

	return 0;
}

int f(void)
{
	static int All = 1;
	printf("in %s gAll = %d\n", __func__, All);
	All += 2;
	printf("again in %s gAll = %d\n", __func__, All);
	return All;
}