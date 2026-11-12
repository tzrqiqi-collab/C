#include <stdio.h>

int main(void) {
    int n,k,x;//x<100
    scanf("%d",&n);
    int day,max,i,a=0,sum=0,week;
    for(x=100;x>=1;x--){
        for(k=1;;k++){
            sum=0;
            for(week=1;week<=52;week++){
                for(day=0;day<=6;day++){
                    sum+=x+day*k;
                }

            }
            if(sum==n){
            printf("%d\n%d",x,k);
            return 0;
            }
            if(sum>n){
                break;
            }
            
        }

        

    }
    return 0;
}