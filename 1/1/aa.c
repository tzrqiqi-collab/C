#include <stdio.h>
int main(){
    int a;
    printf("输入一个数");
    scanf("%d",&a);
    int n;
    while(a>0){
        n++;
        printf("%d",n);
    }
    printf("有%d位",n);
    return 0;
}