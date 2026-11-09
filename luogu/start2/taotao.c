#include <stdio.h>

int main(void) {
    int apple[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&apple[i]);
    }
    int h;
    scanf("%d",&h);
    int*p=apple,count=0;
    for(i=0;i<10;i++){
        if(*(p+i)<=h+30){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}