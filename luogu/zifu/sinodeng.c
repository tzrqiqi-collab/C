#include <stdio.h>
#include <string.h>
int main(void) {
    char *num[]={"zero","one","two","three",
        "four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen",
        "fourteen","fifteen","sixteen","seventeen","eighteen"
        ,"nineteen","twenty","a","both","another","first","second","third"};
int vals[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 0, 21, 44, 69, 96, 25, 56, 89, 24, 61, 0, 1, 4, 1, 1, 4, 9};
    char temp[50];
    int res[100],cnt=0,flag=0;
    while(scanf("%s",temp)!=EOF){
        for(int i=0;i<27;i++){
            if(strcmp(temp,num[i])==0){
                if(vals[i]!=0){
                    res[cnt++]=vals[i];
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag!=1){
        printf("0\n");
        return 0;
    }
    for(int i=0;i<cnt;i++){
        for(int j=0;j<cnt-1-i;j++){
            if(res[j]>res[j+1]){
            int t=res[j];
            res[j]=res[j+1];
            res[j+1]=t;
            }
        }
    }
for (int i = 0; i < cnt; i++) {
    if (i == 0) {
        printf("%d", res[i]);
    } else {
        printf("%02d", res[i]);
    }
}
    printf("\n");
    return 0;
}