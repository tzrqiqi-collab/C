#include <stdio.h>

int main(void) {
    int k,sum=0,i,coin=1,days=0;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        sum+=coin;
        days++;
        if(days==coin){
            coin++;
            days=0;
        }

    }
    printf("%d",sum);
    return 0;
}