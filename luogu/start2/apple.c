#include <stdio.h>
int main(void){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0){
        printf("0");
        return 0;
    }
    int number=(s+t-1)/t;
    if(number>m||t==0){
        printf("0");
        return 0;
    }
    int x=m-number;
    printf("%d",x);
    return 0;
}