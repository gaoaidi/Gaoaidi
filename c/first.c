#include<stdio.h>
int main(void)
{
	int p;
	int i;
	printf("%p\n", &p);
	printf("%p\n", &i);
	int a[10];
	printf("%p\n", &a);
	printf("%p\n", a);
	return 0;
}