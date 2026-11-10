#include <stdio.h>
int main(void) {
    int l,i,sum=0,count=0,a,x;
    scanf("%d",&l);
    for(i=2;;i++){
        a=i;
        int is_prime=0;
        for(x=2;x<a;x++){
            if(a%x==0){
                is_prime=1;
            }
        }
        if(is_prime==0){
            if(sum+a>l){
                break;
            }
            printf("%d\n",a);
            sum+=a;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}