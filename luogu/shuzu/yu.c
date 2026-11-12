#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        int x=i;
        int count=0;
        for(x;x>=0;x--){
            if(a[i]>a[x])count++;
        }
        printf("%d ",count);
    }
    return 0;
}