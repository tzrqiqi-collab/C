#include <stdio.h>

int main(void) {
    int m,n;
    int num[10]={0};
    scanf("%d %d",&m,&n);
    for(int a=m;a<=n;a++){
        int x=a;
        for(;x>0;){
            int temp;
            temp=x%10;
            x/=10;
            num[temp]+=1;
        }
    }
    for(int temp=0;temp<10;temp++){
        printf("%d",num[temp]);
        if(temp!=9)printf(" ");
    }
    return 0;
}