#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a=n*5;
    int b=n*3+11;
    if(a<b){
        printf("Local");
    }
    else{
        printf("Luogu");
    }
    return 0;
}