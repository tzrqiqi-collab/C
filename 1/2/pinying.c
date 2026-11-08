// 输入一个整数,输出每个数字对应的拼音。当整数为负数时,先输出“fu"字。十个数字对应的拼音如下:

// 0: ling
// 1: yi
// 2: er
// 3: san
// 4: si
// 5: wu
// 6: liu
// 7: qi
// 8: ba
// 9: jiu

// 输入格式:

// 输入在一行中给出一个整数,如:1234。

// 提示:整数包括负数、零和正数。
#include <stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    if(x<0){
        printf("fu ");
        x=-x;
    }
    if(x==0){
        printf("ling");
        return 0;
    }
    int i=1,a=x;
    while(a>9){
        i*=10;
        a/=10;
    }
    //if x=153 i=100
    while(i>0){
        a=x/i;

switch (a) {
    case 0: printf("ling"); break;
    case 1: printf("yi"); break;
    case 2: printf("er"); break;
    case 3: printf("san"); break;
    case 4: printf("si"); break;
    case 5: printf("wu"); break;
    case 6: printf("liu"); break;
    case 7: printf("qi"); break;
    case 8: printf("ba"); break;
    case 9: printf("jiu"); break;
}
        if(i!=1){
            printf(" ");
        }
        x=x-a*i;
        i/=10;
    }
}