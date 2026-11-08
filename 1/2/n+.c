#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    double a=0;
    double up=0,down=0;
    int i;
    for(i=1;i<=n;i++){
        if(up==0&&down==0){
            up=2,down=1;
        }
        else{
            int b=up;
            up+=down;
            down=b;
        }
        a+=up/down;
    }
    printf("%.2f",a);
    return 0;
}
