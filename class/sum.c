#include <stdio.h>

int main(void) {
    int a,sum=0;
    while(scanf("%d",&a)>0){
        if(a%2!=0)sum+=a;
    }
    printf("%d",sum);
    return 0;
}