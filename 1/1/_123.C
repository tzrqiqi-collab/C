#include <stdio.h>
int main(){
    int number,n,q=1;
    scanf("%d",&number);
    for(;number>1;number--){
        q*=number;

    }
    printf("%d",q);
    return 0;
    
}