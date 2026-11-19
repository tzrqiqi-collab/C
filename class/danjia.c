#include <stdio.h>

int main(void) {
    int a;
    double x;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    scanf("%d",&a);
    if(a==0){
        printf("再见");return 0;
    }
    switch(a){
        case 1:
        x=3.00;break;
        case 2:
        x=2.50;break;
        case 3:
        x=4.10;break;
        case 4:
        x=10.20;break;
        default:
        x=0.00;
    }
    printf("price = %.2f",x);
    return 0;
}