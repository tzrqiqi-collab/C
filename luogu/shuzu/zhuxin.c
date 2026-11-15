#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[105];
    int made[20005]={0},exist[20005]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        exist[a[i]]=1;
    }
    int j,k,l,count=0;
    for(int i=0;i<n;i++){
        j=i,k=j+1;
        for(j=i+1;j<n;j++){
            int sum=a[i]+a[j];
            if(exist[sum]==1){
                made[sum]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(made[a[i]]==1)count++;
    }
    printf("%d",count);
    return 0;
}