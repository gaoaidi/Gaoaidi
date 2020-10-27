#include <stdio.h>
int n3(int a);
int main()
{
	float a;
	scanf("%f",&a);
	a = n3(a);
	printf("%f",a);
}
int n3(int a){
	int t; 
	t = a*a*a;
	return t;
}
