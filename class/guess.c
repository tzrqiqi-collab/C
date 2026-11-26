#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int target=1,guess,continueGame=1;
    srand(6);
    target=(rand()%100)+1;
    do{
        printf("请输入你的猜测 (1-100): ");
        scanf("%d", &guess);
        scanf("%d",&continueGame);
        if(guess==target){
            printf("恭喜你！猜对了！\n");
        }
        else if(guess>target){
            printf("大了！再试一次！\n");
        }
        else{
            printf("小了！再试一次！\n");
        }
        printf("你想继续猜数字吗？(1: 是, 0: 否):");
        if(continueGame==0)break;


    }while (continueGame == 1);
    printf("感谢你的参与！再见\n");
    return 0;
}