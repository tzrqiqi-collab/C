#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[25][25]={0};
    for(int i=1;i<=n;i++){
        a[i][1]=1;
        a[i][i]=1;
    }
    for(int i=3;i<=n;i++){
        for(int j=2;j<i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a[i][j]);
            if(j<i)printf(" ");
        }
        printf("\n");
    }
    return 0;
}