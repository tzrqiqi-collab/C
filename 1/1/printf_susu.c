#include <stdio.h>
int main(){
    int a,n,isprime;
    for(a=2;a<100;a++){
        isprime=1;
        for(n=2;n<a;n++){
        if(a%n==0){
            isprime=0;
            break;
        }
        }
        if(isprime==1){
            printf("%d ",a);
        }
    }
    return 0;
}