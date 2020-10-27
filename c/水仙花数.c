//
//  main.c
//  C Learning
//
//  Created by 高艾迪 on 2020/9/21.
//

#include <stdio.h>


 int main()
{
    int n;
    scanf("%d",&n);
    int first = 1;
    int i = 1;
    while (i<n) {
        first *= 10;
        i++;
    }
    for(;i<first*10;i++){
        int t = i;
        int sum = 0;
        while (t>0){
            int d = t%10;
            t /= 10;
            int p = 1;
            int j = 0;
            while(j<n){
                p *= d;
                j++;
            }
            sum += p;
        }
        if(sum == i){
            printf("%d\n",i);
        }
    }
    return 0;
}
