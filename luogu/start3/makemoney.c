#include <stdio.h>

int main(void) {
    int mother=0,a=0,i;
    for(i=1;i<=12;i++){
        int take,n;
        a+=300;
        scanf("%d",&take);
        a-=take;
        if(a<0){
            printf("-%d",i);
            return 0;
        }
        if(a>=100){
            n=a/100;
            a-=100*n;
            mother+=100*n;
        }
    }
    printf("%d",a+mother/5+mother);
    return 0;
}