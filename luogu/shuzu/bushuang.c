#include <stdio.h>

int main(void) {
    int n,m;
    int a[3005]={0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=10000000;
    for(int i=0;i<=n-m;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i+j];
        }
        if(min>sum)min=sum;
    }
    printf("%d",min);
    return 0;
}