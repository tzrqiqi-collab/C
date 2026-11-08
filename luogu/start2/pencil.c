#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a,amoney,b,bmoney,c,cmoney;
    scanf("%d %d", &a, &amoney);
    scanf("%d %d", &b, &bmoney);
    scanf("%d %d", &c, &cmoney);
    int minmoney=0;
    minmoney=((n+a-1)/a)*amoney;
    if(minmoney>((n+b-1)/b)*bmoney){
        minmoney=((n+b-1)/b)*bmoney;
    }
    if(minmoney>((n+c-1)/c)*cmoney){
        minmoney=((n+c-1)/c)*cmoney;
    }
    printf("%d",minmoney);
    return 0;
}