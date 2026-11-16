#include <stdio.h>

int main(void) {
    int sum[105]={0};
    int i;
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    int j,k;
    for(i=1;i<=s1;i++){
        for(j=1;j<=s2;j++){
            for(k=1;k<=s3;k++){
                sum[(i+j+k)]+=1;
            }
        }
    }
    int max=0,countmax=0;
    for(i=1;i<=s1+s2+s3;i++){
        if(sum[i]>countmax){
            countmax=sum[i];
            max=i;
        }
    }
    printf("%d",max);
    return 0;
}