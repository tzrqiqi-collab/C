#include <stdio.h>

int main(void) {
    int x;
    scanf("%d",&x);
    if(x<1958||x>2024){
        printf("输入数据不合法");
    }
    else if(x%4==0&&x%100!=0||x%400==0){
        printf("%d是闰年",x);
    }
    else{
        printf("%d不是闰年",x);
    }
    return 0;
}