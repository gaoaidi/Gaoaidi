#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b;
	int c=0, d=0;
	int i,j;
	int temp;
	scanf("%d", &a);
	int num1[a];
	int num2[a];

	for(i=0;i<a;i++){
		scanf("%d", &b);
		if(b%2 == 0){
			num2[c] = b;
			c++;
		}else{
			num1[d] = b;
			d++;
		}
	}

	 for(i=0;i<d;i++){
	 	for(j=0; j<d-1-i; j++){
	 		if(num1[j] < num1[j+1]){
                 temp = num1[j];
                 num1[j] = num1[j+1];
                 num1[j+1] = temp;
             }
	 	}
	 }
	for(i=0;i<c;i++){
		for(j=0; j<c-1-i; j++){
			if(num2[j] < num2[j+1]){
                temp = num2[j];
                num2[j] = num2[j+1];
                num2[j+1] = temp;
            }
		}
	}

	for(i=0;i<c;i++){
	printf("%d ", num2[i]);
	}
	for(i=0;i<d;i++){
		printf("%d ", num1[i]);
	}
	printf("\b\n");
	return 0;
}
