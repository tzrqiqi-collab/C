#include <stdio.h>
int main(void){
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year,month;
    scanf("%d %d",&year,&month);
    if((year%4==0&&year%100!=0)||year%400==0){
        days[2]=29;
    }
    printf("%d\n",days[month]);
    return 0;
}