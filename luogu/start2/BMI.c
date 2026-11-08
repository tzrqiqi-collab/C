#include <stdio.h>
int main(void){
    double m,h;
        scanf("%lf %lf",&m,&h);
    double a=m/(h*h);
    if(a<18.5){
        printf("Underweight");
    }
    else if(a>=24){
        printf("%.6g\nOverweight",a);
    }
    else{
        printf("Normal");
    }
    return 0;
}