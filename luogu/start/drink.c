#include <stdio.h>
#include <math.h>
int main(){
    double a=3.14;
    int r,h;
    scanf("%d %d",&h,&r);
    double v=a*r*r*h;
    int x=(int)ceil(20000.0/v);
    printf("%d",x);
    return 0;
}