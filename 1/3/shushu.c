#include <stdio.h>
int main(void){
    int x;
    int a[10];
    int i;
    for(i=0;i<10;i++){
        a[i]=0;
    }
    scanf("%d",&x);
    while(x!=-1){
        if(x>=0&&x<=9){
            a[x]++;
        }
        scanf("%d",&x);
    }
    for(i=0;i<10;i++){
        printf("%d:%d\n",i,a[i]);
    }
}