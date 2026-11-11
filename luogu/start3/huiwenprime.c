#include <stdio.h>
int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int is(int n){
    return n==reverse(n);
}
int isprime(int n){
    if(n<=1)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(void) {
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    if(a%2==0)a++;
    for(i=a;i<=b&&i<10000000;i+=2){
        if(i!=11&&10<=i&&i<100||1000<=i&&i<10000||100000<=i&&i<1000000){
            continue;
        }
        if(is(i)&&isprime(i)){
            printf("%d\n",i);
        }
        

    }
    return 0;
}