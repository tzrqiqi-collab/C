#include <stdio.h>

int main(void) {
    char a[105];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }
    }
    printf("%s",a);
    return 0;
}