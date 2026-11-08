#include <stdio.h>
#include <math.h>
int main(void){
    int s,v;
    scanf("%d %d",&s,&v);
    int t=(s + v - 1) / v;
    int lasttime=8*60-10-t;
    if (lasttime < 0) {
    lasttime += 1440; // 1440 分钟 = 24 小时
}
    int lasttime_hour=lasttime/60;
    int lasttime_minute=lasttime%60;
    printf("%02d:%02d",lasttime_hour,lasttime_minute);
    return 0;
}