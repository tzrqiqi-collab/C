#include <stdio.h>
int main(void)
{
    int x,y;
    y = x*x;

    printf("%d=%d*%d",y,x,x);  // 输出
    printf("%d *%d=%d",x,x,y); 

    return 0; 
}