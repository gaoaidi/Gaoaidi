#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number =3;
	int *a;
	printf("输入数量：\n");
//	scanf("%d",&number);
	a = (void*)malloc(number*sizeof(int));
	printf("%p\n",a);
	*a = 1;
	*(a+1) = 2; 
	*(a+2) = 3;
	while(*a != 3){
	printf("%d\n",*a++);
	}
	free(a+2);
	return 0;
}