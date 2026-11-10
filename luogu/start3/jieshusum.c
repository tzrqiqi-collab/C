#include <stdio.h>

int main(void) {
    int n,k,i;
    scanf("%d",&k);
    double s=0;
    for(i=1;;i++){
        s+=1.0/i;
        n=i;
        if(s>k){
            break;
        }
    }
    printf("%d",n);
    return 0;
}