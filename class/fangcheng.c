#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 && b == 0) {
        if (c == 0) {
            printf("Zero Equation\n");
        } else {
            printf("Not An Equation\n");
        }
        return 0;
    }
    double D = b * b - 4 * a * c;
    if(D==0){
        printf("%.2f\n", -b / (2 * a));
    }
    else if(D>0){
        double x1=(-b+sqrt(D))/(2 * a);
        double x2=(-b-sqrt(D))/(2 * a);
    if(x1>x2){
        printf("%.2f\n%.2f",x1,x2);
    }
    else{
        printf("%.2f\n%.2f",x2,x1);        
    }
    }
    else{
        double real=-b/(2*a);
        double fake=sqrt(-D)/(2*a);
        printf("%.2f+%.2fi\n", real, fake);
        printf("%.2f-%.2fi\n", real, fake);        
    }
    return 0;
}