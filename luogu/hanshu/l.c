#include <stdio.h>
#include <math.h>
double a(double x1,double y1,double x2,double y2){
    double l;
    l=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return l;
}
int main(void) {
    double x1, y1, x2, y2, x3, y3;
    while (scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF) {
        double sum = a(x1, y1, x2, y2) 
                   + a(x2, y2, x3, y3) 
                   + a(x3, y3, x1, y1);
        printf("%.2f\n", sum);
    }
    return 0;
}