#include <stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    if(x%2==0&&(4<x&&x<=12)){
        printf("1 ");
    }else{        printf("0 ");}
    if((x%2==0)||(4<x&&x<=12)){
        printf("1 ");
    }
    else{printf("0 ");}
    if( (x%2==0 && !(x>4 && x<=12)) || (!(x%2==0) && (x>4 && x<=12)) ) 
    printf("1 "); 
    else printf("0 ");
    if(x%2!=0&&(x<=4||x>12)){
        printf("1");
    }
    else{printf("0");}
    return 0;
}