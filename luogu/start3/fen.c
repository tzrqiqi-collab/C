#include <stdio.h>

int main(void) {
    int n,max=0,min=10;
    scanf("%d",&n);
    int sum=0;
    int a,i;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum+=a;
        if(max<a)max=a;
        if(min>a)min=a;
    }
    a=sum-max-min;
    double ave=1.0*a/(n-2);
    printf("%.2f",ave);
    return 0;
}