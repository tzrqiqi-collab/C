#include <stdio.h>
int main(void){
    int yuan,jiao;
    scanf("%d %d",&yuan,&jiao);
    int money=yuan*10+jiao;
    int number=money/19;
    printf("%d",number);
    return 0;
}