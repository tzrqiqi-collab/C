#include <stdio.h>
int isprime(int x){
    int a=1;
    for(int i=0;i<=x*x;i++){
        if(x&i==0)a=0;
    }
    return a;
}
int main(void) {
    
    return 0;
}