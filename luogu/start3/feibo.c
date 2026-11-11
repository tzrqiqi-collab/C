#include <stdio.h>
#include <math.h>
int main(void) {
    int n,i;
    scanf("%d",&n);
    double f;
    double a=1,b=1;
    a=pow(((1+sqrt(5.0))*1/2),n);
    b=pow((1-sqrt(5.0))/2,n);
    f=(a-b)/sqrt(5.0);
    printf("%.2f",f);
    return 0;
}