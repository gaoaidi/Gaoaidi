#include <stdio.h>
int main(void) 
{
	int i,j,k;
    for (i = 0; i < 10; i++) {
        if (i != 5) continue;
        printf("%d ", i);       //this statement is skipped each time i!=5
    }
 
    printf("\n");
 
    for (j = 0; j < 2; j++) {
        for (k = 0; k < 5; k++) { //only this loop is affected by continue
            if (k == 3) break;
            printf("%d%d ", j, k);    //this statement is skipped each time k==3
        }
    }
}
