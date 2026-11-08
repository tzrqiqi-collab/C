#include    <stdio.h>
int main()
{
    int cm;
    printf("请输入厘米数:\n");
    scanf("%d",&cm);
    double m=cm/100.0;
    double a;
    a=m/0.3048;
    int foot=a;
    int inch=(a-foot)*12;
    printf("英尺为%d,英寸为%d\n",foot,inch);
    return 0;
}