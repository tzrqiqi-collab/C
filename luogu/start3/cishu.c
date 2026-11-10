#include <stdio.h>

int main(void) {
    int n,x,i;
    scanf("%d %d",&n,&x);
        int count=0;
    for(i=1;i<=n;i++){
        int temp=i;
        while (temp > 0) {
        int digit = temp % 10;
        if (digit == x) {
            count++;
        }
        temp = temp / 10;
    }
    }
    printf("%d",count);
    return 0;
}