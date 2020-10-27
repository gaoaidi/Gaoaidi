#include <stdio.h>
void Temperatures(double fahrenheit);
int main()
{
	double fahrenheit;
	_Bool exit = 1;
	printf("请输入温度:");
	exit = (scanf("%lf",&fahrenheit)==1);
	while(exit){
	printf("请输入温度:");
	Temperatures(fahrenheit);
	exit = (scanf("%lf",&fahrenheit)==1);
	}
	return 0;
}
void Temperatures(double fahrenheit)
{
	double celsius = 1.8 * fahrenheit + 32;
	double kelvin = celsius +273.16;
	printf("%fC,%fK\n",celsius,kelvin);
}
