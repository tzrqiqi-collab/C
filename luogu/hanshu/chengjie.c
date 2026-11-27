#include <stdio.h>
int chengjie(int n){
    if(n==1)return 1;
    return n*chengjie(n-1);
}
int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d",chengjie(n));
    return 0;
}