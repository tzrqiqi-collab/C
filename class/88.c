#include <stdio.h>

int main(void) {
    int n;
    int seat[25]={0};
    scanf("%d",&n);
    for(int t=0;t<n;t++){
        int k,found=1;
        scanf("%d",&k);
        for(int start=1;start<21-k;start++){
            int go=0;
            for(int i=0;i<i+k;i++){
                if(seat[start+i]==1){
                    go=1;
                    break;
                }
            }
            if(go==0){
                for(int i=0;i<i+k;i++){
                    seat[start+i]=1;
                }
                printf("成功：%d-%d",start,start+k-1);
                found=0;
            }
        }
        if(found==1)printf("失败");
    }
    return 0;
}