#include <stdio.h>
int main()
{
	int a;
	int x,y,z;
	int cnt=0;
	printf("请输入一个六以下的数：");
	scanf("%d",&a);
	for (x=a;x<a+4;x++){
		for (y=a;y<a+4;y++){
			for(z=a;z<a+4;z++){
				if (x!=y && x!=z && y!=z){
					printf("%d%d%d",x,y,z);
					cnt++;
					if (cnt==6){
						printf("\n");
						cnt = 0;
					} else{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
} 
