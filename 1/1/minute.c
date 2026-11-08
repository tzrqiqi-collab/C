#include                                            <stdio.h>
int                         main(){
    int time1,time2;
    scanf("%d %d",&time1,&time2);
    int hour1=time1/100;
    int allminute1=hour1*60+time1%100;
    int allminute2=allminute1+time2;
    int hour2=allminute2/60;
    int minute2=allminute2%60;
    printf("%d%d",hour2,minute2);
    return 0;
}
