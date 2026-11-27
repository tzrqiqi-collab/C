#include <stdio.h>
int run(int x){
    if((x%4==0&&x%100!=0)||x%400==0){
        return 1;
    }
    return 0;
}
int main(void) {
    int x,y;
    int count=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++){
        if(run(i))count++;
    }
    printf("%d\n",count);
    for(int i=x;i<=y;i++){
        if(run(i))printf("%d ",i);
    }
    return 0;
}