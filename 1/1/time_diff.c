#include <stdio.h>
int main(){
    double hour1=0,minute1=0;
    double hour2=0,minute2=0;
    printf("请输入第一个时间(小时 分钟):");
    scanf("%lf %lf",&hour1,&minute1);
    printf("请输入第二个时间(小时 分钟):");
    scanf("%lf %lf",&hour2,&minute2);
    double a=hour1*60+minute1;
    double b=hour2*60+minute2;
    int c=b-a;
    if(c<0)
    { c=-c;}
    int d=c/60;
    int e=c%60;
    printf("时间差为%d小时%d分钟",d,e);
    return 0;
}
