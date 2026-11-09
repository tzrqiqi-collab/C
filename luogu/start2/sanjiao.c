#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int temp;
    if(a>b){
        temp=b;
        b=a;
        a=temp;
    }
    if(a>c){
        temp=c;
        c=a;
        a=temp;
    }
    if(b>c){
        temp=c;
        c=b;
        b=temp;
    }
    int i,x=0;
    for(i=1;i<=a;i++){
        if(a%i==0&&c%i==0){
            x=i;
        }
    }
    if(x==0){
        printf("%d/%d",a,c);
    }
    else{
        printf("%d/%d",a/x,c/x);
    }
    return 0;
}