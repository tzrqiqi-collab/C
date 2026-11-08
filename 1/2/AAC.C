#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a,first=1;
    for(a=1;a<n;a++){
        first*=10;
    }
    for(a=first;a<first*10;a++){
        int sum=0;
        int d=1;
        int count;
        int i;
        int p=1;
        int t=a;
        for(i=1;i<=first;i*=10){
            d=t%10;
            t/=10;
            for(count=1;count<=n;count++){
                p*=d;
            }
            sum+=p;
            p=1;
            
        }
        if(sum==a){
            printf("%d\n",sum);

        }

    }
}