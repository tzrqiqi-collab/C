#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int time1=a*60+b;
    int time2=c*60+d;
    int time=time1-time2;
    if(time<0){
        time=-time;
    }
    int timehour=time/60;
    printf("%d %d",timehour,time%60);
    return 0;
}