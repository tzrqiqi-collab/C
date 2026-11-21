#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    char a[55]={0};
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        int x=(a[i]-'a'+n)%26;
        a[i]='a'+x;
    }
    for(int i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    return 0;
}