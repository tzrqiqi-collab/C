#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int i,a,b,x=0,day[7];
    for(i=0;i<8;i++){
        scanf("%d %d",&a,&b);
        day[i]=a+b;

    }
    int max=0;
    for(i=0;i<8;i++){
        if(day[i]>8&&day[i]>max){
            max=day[i];
            x=i+1;
        }
    }
    if(max==0){
        printf("0");
    }else{printf("%d",x);}

    return 0;
}