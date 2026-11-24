#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000];
    scanf("%s",&s);
    int len=strlen(s);
    if (s[len - 1] == '%') {
        s[len - 1] = '\0';
        reverse_and_clean(s, 0);
        printf("%s%%\n", s);
    } 
    else if()
    return 0;
}