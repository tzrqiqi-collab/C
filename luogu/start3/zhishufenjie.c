#include <stdio.h>

int main(void) {
    int n,i;
    scanf("%d",&n);\
    if (n % 2 == 0) {
        printf("%d\n", n / 2);
        return 0;
    }
    for(i=3;i*i<=n;i+=2){
        if(n%i==0){
            printf("%d",n/i);
            return 0;
        }
    }
        return 0;
}