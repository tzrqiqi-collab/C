#include <stdio.h>
int main(){
    int a,b;
    int min;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    int ret=1;
    int i;

    for(i=2;i<=min;i++){
        if(a%i==0){
            if(b%i==0){
                ret=i;
            }
        }
    }  
    printf("%d",ret);
    return 0;
}