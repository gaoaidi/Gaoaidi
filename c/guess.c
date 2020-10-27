#include <stdio.h>
int main()
{
	int guess = 1;
	char response;
	printf("Pick an integer from 1 to 10. I will try to guess it.\n");
	printf("Respond with a y if my guess is right and "
		"with a n if it is wrong.\n");
	printf("Uh... is your namber %d?\n",guess);
	while((response = getchar()) != 'y'){
		if(response == '\n'){
		
		}else if(response != 'n'){
			printf("Sorry, I understand only y or n.\n");
		} else{
			printf("Well, then is it %d?\n",++guess);
		}
	}
	return 0;
}
