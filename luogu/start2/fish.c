#include <stdio.h>

int main(void) {
    int x,n,i,total=0;
    scanf("%d %d",&x,&n);
    for(i=1;i<=n%7;i++){
        if(x!=6&&x!=7){
            total+=250;
        }
        x++;
    }
    total+=n/7*1250;
    printf("%d",total);
    return 0;
}