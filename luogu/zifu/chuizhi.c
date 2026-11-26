#include <stdio.h>
#include <string.h>
int main(void) {
    char a[105];
    char num[27]={0};
    for(int i=0;i<4;i++){
        fgets(a,105,stdin);
        for(int i=0;a[i];i++){
            if(a[i]>='A'&&a[i]<='Z'){
                num[a[i]-'A']++;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < 26; i++){
        if (num[i] > max) max = num[i];
    }
    for (int h = max; h >= 1; h--) {
        int last = -1;
        for (int i = 0; i < 26; i++)
            if (num[i] >= h) last = i;
        
        for (int i = 0; i <= last; i++) {
            if (num[i] >= h) printf("*");
            else printf(" ");
            if (i < last) printf(" ");
        }
            printf("\n");      
    }
    for (int i = 0; i < 26; i++) {
        printf("%c", 'A' + i);
        if (i < 25) printf(" ");
    }

    return 0;
}