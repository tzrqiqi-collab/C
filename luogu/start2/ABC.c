#include <stdio.h>

int main(void) {
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    char b[4];
    scanf("%s",b);
    int temp;
    if (a[0] > a[1]) { temp = a[0]; a[0] = a[1]; a[1] = temp; };
    if (a[0] > a[2]) { temp = a[0]; a[0] = a[2]; a[2] = temp; };
    if (a[1] > a[2]) { temp = a[1]; a[1] = a[2]; a[2] = temp; };
    for(temp=0;temp<3;temp++){
        if(b[temp]=='A'){
            printf("%d",a[0]);
            if (temp < 2) {
            printf(" ");
        }
        }
        else if(b[temp]=='B'){
            printf("%d",a[1]);
            if (temp < 2) {
            printf(" ");
        }
        }
        else{
            printf("%d",a[2]);
            if (temp < 2) {
            printf(" ");
        }
    }
}
    return 0;
}