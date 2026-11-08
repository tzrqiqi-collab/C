#include <stdio.h>
int main(void){
    int n;
    int i=1,c=1;
    int d;
    scanf("%d",&n);
    while(c<n){
        i*=10;
        c++;
    }
    int b=i;

    for(;i<b*10;i++){
        int x=i;
        int sum=0;

    for(;x>0;){
        d=x%10;
        x/=10;
        c=1;
        int p=1;
        while(c<=n){
            c++;
            p*=d;
        }
        sum+=p;
    }
    if(sum==i){
        printf("%d\n",sum);
    }
    }
    return 0;
}