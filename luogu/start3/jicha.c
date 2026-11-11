#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];int min=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d",abs(max-min));
    return 0;
}