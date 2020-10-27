#include <stdio.h>
int* f(void);
void g(void);

int main(int argc, char const *argv[])
{
	int *p = f();
	printf("%d\n", *p);
	g();
	printf("%d\n", *p);
	return 0;
}

int* f(void)
{
	int i = 12;
	printf("0x%p\n", &i);
	return &i;
}

void g(void)
{
	int k = 24;
	printf("%d\n", k);
	printf("0x%p\n", &k);
}