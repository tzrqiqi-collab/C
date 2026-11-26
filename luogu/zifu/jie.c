#include <stdio.h>

int main(void) {
    int v[3] = {0};
    char s[260];
    scanf("%255s", s);
    for (int i = 0; s[i] != '\0'; i += 5) {
        char src = s[i + 3];
        if (src >= '0' && src <= '9')
            v[s[i] - 'a'] = src - '0';
        else
            v[s[i] - 'a'] = v[src - 'a'];
    }
    printf("%d %d %d\n", v[0], v[1], v[2]);
    return 0;
}