#include <stdio.h>
int main(){
    int a;
    printf("输入一个数");
    scanf("%d",&a);
    int n;
    do{
        n++;
        a/=10;
    }
    while(a>0);
    printf("有%d位",n);
    return 0;
}