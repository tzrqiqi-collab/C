#include <stdio.h>

int main(void) {
    int x,i;
    scanf("%d",&x);
    if(x<0){
        printf("-");
        x=-x;
    }
    int d;
    int a=0;
    while(x>0){
        d=x%10;
        x/=10;
        a=a*10+d;
    }
    printf("%d",a);
    return 0;
}