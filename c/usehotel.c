#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int nights;
	double hotel;
	int code;
	
	while((code = menu()) != QUIT){
		switch(code){
			case 1:{
				hotel = HOTEL1;
				break;
			}
			case 2:{
				hotel = HOTEL2;
				break;
			}
			case 3:{
				hotel = HOTEL3;
				break;
			}
			case 4:{
				hotel = HOTEL4;
				break;
			}
			default:{
				hotel = 0.0;
				printf("Oops!\n");
				break;
			}
		}
		nights = getnights();
		showprice(hotel,nights);
	}
	printf("THANK YOU AND GOODBYE.\n");
	return 0;
}
