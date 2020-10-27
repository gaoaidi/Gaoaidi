//
//  main.c
//  C Learning
//
//  Created by 高艾迪 on 2020/9/21.
//

#include <stdio.h>

int main()
{
    int t;
    int x;
    int num;
    double average=0;
    printf("将输入多少个数：");
    scanf("%d",&t);
    int number[t];
    for(x=0;x<t;x++){
        scanf("%d",&num);
        number[x] = num;
        average += num;
    }
    average /= t;
//    printf("average = %f\n",average);
    for(x=0;x<t;x++){
        if ( average<number[x]){
            printf("%d ",number[x]);
        }
    }

    return 0;
}
