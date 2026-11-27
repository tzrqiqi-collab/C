#include <stdio.h>
int a(int x){
    int is=1;
    if (x < 2) return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            is=0;
        }
    }
    return is;
}
int main(void) {
    int n;
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(a(x)){
            printf("%d",x);
            if(i!=n)printf(" ");
        }
    }
    return 0;
}