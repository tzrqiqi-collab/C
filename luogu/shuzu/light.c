#include <stdio.h>

int main(void) {
    int t,n;
    double a;
    scanf("%d",&n);
    int x[2000005]={0};
    for(int i=1;i<=n;i++){
        scanf("%lf %d",&a,&t);
        for(int count=1;count<=t;count++){
            if(x[(int)(count*a)]==0)x[(int)(count*a)]=1;
            else x[(int)(count*a)]=0;
        }
    }
    for(int i=1;i<=2000004;i++){
        if(x[i]==1){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}