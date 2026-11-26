#include <stdio.h>
#include <string.h>
void reverse_and_clean(char *s, int type) {
    int len = strlen(s);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = s[i]; s[i] = s[j]; s[j] = temp;
    }
    if (type == 0) { 
        int start = 0;
        while (start < len - 1 && s[start] == '0') start++;
        memmove(s, s + start, len - start + 1);
    } else {
        int end = len - 1;
        while (end > 0 && s[end] == '0') end--;
        s[end + 1] = '\0';
    }
}
int main(void) {
    char s[2000];
    scanf("%s",&s);
    int len = strlen(s);
    if (s[len - 1] == '%') {
        s[len - 1] = '\0';
        reverse_and_clean(s, 0);
        printf("%s%%\n", s);
    } 
    else if (strchr(s, '/')) {
        char *p = strchr(s, '/');
        *p = '\0';
        char *num = s, *den = p + 1;
        reverse_and_clean(num, 0);
        reverse_and_clean(den, 0);
        printf("%s/%s\n", num, den);
    } 
    else if (strchr(s, '.')) {
        char *p = strchr(s, '.');
        *p = '\0';
        char *int_part = s, *dec_part = p + 1;
        reverse_and_clean(int_part, 0);
        reverse_and_clean(dec_part, 1);
        printf("%s.%s\n", int_part, dec_part);
    } 
    else {
        reverse_and_clean(s, 0);
        printf("%s\n", s);
    }
    return 0;
}