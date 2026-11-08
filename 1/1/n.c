#include <stdio.h>
int main(void){
    int a;
    int i;
    double sum=0.0;
    int sign=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){

        sum+=sign*1.0/i;
        sign=-sign;

    }
    printf("%lf",sum);
    return 0;
}