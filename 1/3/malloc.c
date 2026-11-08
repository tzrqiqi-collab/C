#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,i;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    if (a==NULL){
        printf("没内存了");
        return 1;
    }
    for(i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
    }
    for(i=1;i<=n;i++){
        printf("%d",a[i-1]);
    }
    free(a);
    return 0;
}