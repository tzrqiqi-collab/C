#include <stdio.h>
int main(){
    int a,n,isprime=1;
    scanf("%d",&a);
    if (a <= 1) {
        printf("不是\n");
        return 0; // 直接结束程序
    }
    for(n=2;n<a;n++){
        if(a%n==0){
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        printf("不是");
    }
    else{
        printf("是");
    }
    return 0;
}
