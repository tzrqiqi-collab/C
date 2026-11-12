#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[105];
    int i;
    for(i=0;;i++){
        a[i]=n;
        if(n==1)break;
        if(n%2!=0)n=3*n+1;
        else n/=2;
    }
    while(i>=0){
        printf("%d",a[i]);
        if(i!=0)printf(" ");
        i--;
    }

    return 0;
}