#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int min,a;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(i==1)min=a;
        if(min>a)min=a;
    }
    printf("Min = %d",min);
    return 0;
}