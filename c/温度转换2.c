#include <stdio.h>
void Temperatures(double fahrenheit,double* celsius, double* kelvin);
int main()
{
  	double celsius, kelvin;
	double fahrenheit;
	_Bool exit = 1;
	printf("�������¶�:");
	exit = (scanf("%lf",&fahrenheit)==1);
	while(exit){
		printf("�������¶�:");
		Temperatures(fahrenheit, &celsius, &kelvin);
	  	printf("%.2fC,%.2fK\n", celsius, kelvin);
		exit = (scanf("%lf",fahrenheit)==1);
	}
	return 0;
}
void Temperatures(double fahrenheit,double* celsius, double* kelvin)
{
	*celsius = 1.8 * fahrenheit + 32;
	*kelvin = *celsius + 273.16;
//	printf("%.2fC,%.2fK\n",celsius,kelvin);
}
