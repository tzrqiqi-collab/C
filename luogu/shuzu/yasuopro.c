#include <stdio.h>

int main(void) {
    char a[205][205];
    int n=0;
    char str[205];
    while(scanf("%s",str)!=EOF){
        for(int j=0;str[j]!='\0';j++){
            a[n][j]=str[j];
        }
        n++;
    }
    printf("%d ",n);
    char current='0';
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==current){
                count++;
            }
            else{
                printf("%d ",count);
                count=1;
                current=a[i][j];
            }
        }
    }
    printf("%d",count);
    return 0;
}