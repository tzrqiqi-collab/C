#include <stdio.h>

int main(void) {
    int n,i;
    scanf("%d",&n);
    int true[7];
    for(i=0;i<7;i++){
        int a;
        scanf("%d",&a);
        true[i]=a;
    }
    int x[7],zhong[7]={0};
    for(i=1;i<=n;i++){
        int b,number,count=0;
        for(b=0;b<7;b++){
            scanf("%d",&number);
            x[b]=number;
        }
        for(b=0;b<7;b++){
            for(int k=0;k<7;k++){
                if(x[b]==true[k])count++;
            }
        }
        if (count > 0) {
        zhong[7 - count] += 1;
        }
    }
    for(i=0;i<7;i++){
        printf("%d",zhong[i]);
        if(i!=6)printf(" ");
    }
    return 0;
}