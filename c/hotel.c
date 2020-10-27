/* hotel.c函数支持模块 */
#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"
int menu()
{
	int code,status;
	
	printf("\n%s%s\n",STARS,STARS);
	printf("ENTER the number of the desire hotel:\n");
	printf("1) Fairfield Arms 2) Hotel Olympic\n");
	printf("3) Cherworthy Plaza 4) The Stockton\n");
	printf("5) quit\n");
	printf("%s%s\n",STARS,STARS);
	while((status = scanf("%d",&code)) != 1 || (code < 1 || code > 5)){
		if(status != 1){
			scanf("%*s");
		}
		printf("ENTER an integar from 1 to 5, please.\n");
	}
	return code;
} 

int getnights()
{
	int nights;
	
	printf("How many nights are needed?\n");
	while((scanf("%d",&nights)) != 1){
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}
	return nights;
}

void showprice(double hotel, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	for(n=1;n<=nights;n++, factor *= DISCOUNT){
		total += hotel * factor;
	}
	printf("The totak cost will be $%.2f.\n",total);
	return;
}

