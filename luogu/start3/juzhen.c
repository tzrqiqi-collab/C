#include <stdio.h>

int main(void) {
    int n,count=1,i,j;
    int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%02d",sum);
            sum++;
        }
        printf("\n");
    }
    sum=1;
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%02d",sum);
            sum++;
        }
        printf("\n");
    }
    return 0;
}