/*strcmp(const char* s1, const char* s2)*/
#include <stdio.h>
#include <string.h>

int mycmp(const char* s1, const char* s2);

int main(int argc, char const *argv[])
{
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", mycmp(s1, s2));
	printf("%d\n", 'a' - 'A');

	return 0;
}

int mycmp(const char* s1, const char* s2)
{
	int idx = 0;
	while (1){
		if( s1[idx] != s2[idx]){
			break;
		}else if(s1[idx] == '\0'){
			break;
		}
		idx++;
	}
	return s1[idx] - s2[idx];
}