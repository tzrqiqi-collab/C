#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int one,two,three;
    one=a/100.0;
    two=(a-one*100)/10;
    three=a-one*100-two*10;
    printf("%d",three*100+two*2+one);
    return 0;
}