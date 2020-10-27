/*strchr(const char *s, int c) 查找字符
strrchr(const char *s, int c) 从右侧查找字符
strstr(const char *s1, const char *s2) 查找字符串
strcasestr(const char *s1, const char *s2)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char a[] = "Hello.";
	char *p = strchr(a, 'l');
	printf("%s\n", p);
	p = strchr(p+1, 'l');//查找第二个l
	printf("%s\n", p);
	*p = '\0';
	printf("%s\n", a);//打印第二个l之前的字符
	return 0;
}