//
//  main.c
//  C Learning
//
//  Created by 高艾迪 on 2020/9/21.
//

#include <stdio.h>

 int main()
{
    int x,i;
    int number[10];
    
    for (i=0;i<10;i++){
        number[i] = 0;
    }
    
    printf("输入0~9的一些数:");
    scanf("%d",&x);
    while (x<10) {
        number[x] += 1;
        scanf("%d",&x);
    }
    for ( i=0; i<10; i++){
        printf("%d有%d个\n",i,number[i]);
    }
    
    return 0;
}
