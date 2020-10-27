#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int guess,a=0;
	
	do
	{
		printf("请输入一个1至100的数字:");
		scanf("%d",&guess);
		a++;
		if (guess>number){
			printf("猜大了\n");
		} else if (guess<number){
			printf("猜小了\n");
		}
	} while (guess != number);
	printf("猜对了！猜了%d次",a);
	
	return 0; 
} 
