#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[205][205]={0};
    int count=0;
    for(;count<n*n;){
        int temp,x;
        scanf("%d",&temp);
        count+=temp;
        if (count >= n * n) {
        break;
        }
        scanf("%d",&x);
        for(int j=0;j<x;j++){
            a[count / n][count % n] = 1;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}