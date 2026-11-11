#include <stdio.h>

int main(void) {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=1,maxcount=1;
    for(i=1;i<n;i++){
        if(a[i-1]+1==a[i]){
            count++;
        }
        else count=1;
        if(maxcount<count)maxcount=count;
    }
    printf("%d",maxcount);
    return 0;
}