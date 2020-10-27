/*strcpy(char *dst, const char *src)
strncpy(char *dst, const char *src, int len) 对长度有要求，更安全
strcat(char *dst, char *src)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* mycpy(char* dst,const char* src);

int main(int argc, char const *argv[])
{
	char src[20] = "Hello!";
	char src2[] = "World!";
	char *dst = (char*)malloc(strlen(src)+1);
	strcpy(dst, src);
	printf("%s\n", dst);
	mycpy(dst, src);
	printf("%s\n", dst);
	strcat(src, src2);
	printf("%s\n", src);
	return 0;
}

char* mycpy(char* dst,const char* src)
{
	int idx = 0;
	while(src[idx] != '\0'){
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return dst;
}