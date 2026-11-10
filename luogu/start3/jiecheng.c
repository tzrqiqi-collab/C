#include <stdio.h>

int main(void) {
    int i,x,total=1;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        total*=(x-i);
    }
    printf("%d",total);
    return 0;
}