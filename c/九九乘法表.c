//
//  main.c
//  C Learning
//
//  Created by 高艾迪 on 2020/9/21.
//

#include <stdio.h>


 int main()
{
    int m=1,n=1;
    for (;m<=9;m++){
        for(;n<=9;n++){
            printf("%d*%d=%d\t",m,n,m*n);
        }
        n=1;
        printf("\n");
    }
    return 0;
}
