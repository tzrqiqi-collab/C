#include <stdio.h>

int main(void) {
    int a[105]={0};
    int count=0,x;
    while(1){
        scanf("%d",&x);
        if(x==0)break;
        a[count]=x;
        count++;
    }
    for(count-=1;count>=0;count--){
        printf("%d",a[count]);
        if(count!=0)printf(" ");
    }
    return 0;
}