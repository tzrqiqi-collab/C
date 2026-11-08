#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int number=rand()%100;
    int count=0;
    int a;
   do{
        printf("输入一个数");
        scanf("%d",&a);
        if(a<number){
            count++;
            printf("小了\n");
        }
        else if(a==number){
            count++;
            break;
        }
        else{
            count++;
            printf("大了\n");

        }
    }
    while(a!=number);
    printf("猜对了你猜了%d次",count);
    return 0;
}