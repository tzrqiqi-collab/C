#include <stdio.h>

int main(void) {
    double sum=0;
    double s;
    int i;
    double x=2;
    scanf("%lf",&s);
    for(i=1;sum<s;i++){
        sum+=x;
        x*=0.98;
    }
    printf("%d",i-1);
    return 0;
}