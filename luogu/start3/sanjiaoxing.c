#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int i,j;
    int number=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            printf("%02d",number);
            number++;
        }
            printf("\n");
    }

    return 0;
}