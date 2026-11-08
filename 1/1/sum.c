#include <stdio.h>
int main(){
    int number=0,n=0,sum=0;
    do{
    printf("输入一个数");
    scanf("%d",&number);

    if(number==-1){
        break;
    }
    n++;
    sum+=number;
    }
    while(number!=-1);
    double average=0;
    average=(double)sum/n;
    printf("平均数是%0.2lf",average);
return 0;

}