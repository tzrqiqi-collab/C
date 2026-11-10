#include <stdio.h>

int main(void) {
    int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n+1],b[n+1];
    int count=0,bcount=0;
    for(i=1;i<=n;i++){
        if(i%k==0){
            a[count]=i;
            count++;
        }
        else{
            b[bcount]=i;
            bcount++;
        }
    }
    int sum=0;
    for(i=0;i<count;i++){
        sum+=a[i];
    }
    printf("%.1f ",1.0*sum/count);
    sum=0;
    for(i=0;i<bcount;i++){
        sum+=b[i];
    }
    printf("%.1f",1.0*sum/bcount);    
    return 0;
}