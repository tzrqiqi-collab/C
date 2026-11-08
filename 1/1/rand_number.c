#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int number=rand()%100;
    int count=1,a;
    printf("输入一个数");
    scanf("%d",&a);
    if(a==number){
        printf("可以，%d次猜中",count);
    }
    while(a!=number){
        if(a<number){
            printf("小了");
        }
        else if(a>number){
            printf("大了");
        }
        else{
            printf("你用了%d次",count);
        }
        count++;
        scanf("%d",&a);
    }
    printf("你用了%d次",count);
}
