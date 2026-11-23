#include <stdio.h>
#include <string.h>
int main(void) {
    char ch;
    int count=0;
    char x[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    for(;(ch=fgetc(stdin))!=EOF;){
        if(ch=='\0'||ch=='\n'){
            continue;
        }
        if(ch==' '){
            count++;
        }
        else{
            count+=x[ch-'a'];
        }
    }
    printf("%d",count);
    return 0;
}