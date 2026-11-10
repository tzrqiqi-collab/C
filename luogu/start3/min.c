#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int i,min,x;
    scanf("%d",&min);
    for(i=1;i<n;i++){
        scanf("%d",&x);
        if(min>x){
            min=x;
        }
    }
    printf("%d",min);
    return 0;
}