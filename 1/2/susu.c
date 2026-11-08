#include <stdio.h>
int main(void){
    int m,n;
    int sum=0,count=0;
    scanf("%d %d",&m,&n);
    for(m=m;m<=n;m++){
        int t=m;
        int i=2;
        int is_prime=1;
        if(t<=1){
            continue;
            }

        for(;i<t;i++){

            if(t%i==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime==1){
            count++;
            sum+=t;
        }
    }
    printf("%d %d",count,sum);
    return 0;
}