/*strlen*/
#include <stdio.h>
#include <string.h>

int mylen(const char* s);

int main(int argc, char const *argv[])
{
	char line[] = "Hello";
	printf("strlen=%d\n", mylen(line));
	printf("sizeof=%lu\n", sizeof(line));
	return 0;
}

int mylen(const char* s)
{
	int cnt = 0;
	while(*s != '\0'){
		cnt++;
		s++;
	}
	return cnt;
}