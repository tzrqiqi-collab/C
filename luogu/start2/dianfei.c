#include <stdio.h>

int main(void) {
    int x;
    scanf("%d",&x);
    double a,b=0,c=0;
    if(x<=150){
        a=0.4463*x;
    }
    else if(150<x&&x<=400){
        a=0.4463*150;
        b=0.4663*(x-150);
    }
    else{
        a=0.4463*150;
        b=0.4663*(250);
        c=0.5663*(x-400);
    }
    printf("%.1f",a+b+c);
    return 0;
}