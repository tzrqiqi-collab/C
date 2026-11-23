#include <stdio.h>
int main(void) {
    char a[10]={0};
    fgets(a,10,stdin);
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!='\n'&&a[i]!=' '){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}