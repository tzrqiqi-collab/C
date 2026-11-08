#include <stdio.h>
int main(void){
    int yuan;
    int one,two,five;
    scanf("%d",&yuan);
for ( one = 1; one < yuan*10; one++ ) {
    for ( two = 1; two < yuan*10/2; two++ ) {
        for ( five = 1; five < yuan*10/5; five++ ) {
            if ( one + two*2 + five*5 == yuan*10 ) {
                printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",one, two, five, yuan);
                }
            }
    }
}
}