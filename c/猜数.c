#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int guess,a=0;
	
	do
	{
		printf("������һ��1��100������:");
		scanf("%d",&guess);
		a++;
		if (guess>number){
			printf("�´���\n");
		} else if (guess<number){
			printf("��С��\n");
		}
	} while (guess != number);
	printf("�¶��ˣ�����%d��",a);
	
	return 0; 
} 
