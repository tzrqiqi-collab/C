#include <stdio.h>

int main(void) {
    int l,m;
    scanf("%d %d",&l,&m);
    int a[10005]={0};
    int i,start,end;
    for(i=1;i<=m;i++){
        scanf("%d %d",&start,&end);
        for(;start<=end;start++){
            a[start]=1;
        }
    }
    int count=0;
    for(i=0;i<=l;i++){
        if(a[i]==0)count++;
    }
    printf("%d",count);
    return 0;
}