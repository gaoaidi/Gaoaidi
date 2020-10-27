#include <stdio.h>
int main()
{
	char *s = "Hello World";
	char s3[] = "Hello World";
	int a;
	// *s = 'B';
	printf("s = %p\n", s);
	printf("%p\n", &a);
	printf("Here!s[0]=%c\n", s[0]);
	s3[0] = 'B';
	printf("s3[0] = %c", s3[0]);
	return 0;
}