#include <stdio.h>

int main(void) {
    int n;
    char s[105];
    scanf("%d", &n);
    scanf("%s", s);
    
    int count = 0;
    int used[105] = {0};
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'V' && s[i+1] == 'K') {
            count++;
            used[i] = 1;
            used[i+1] = 1;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (used[i] || used[i+1]) continue;
        
        if (s[i] == 'V' && s[i+1] == 'V') {
            count++;
            break;
        }
        if (s[i] == 'K' && s[i+1] == 'K') {
            count++;
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}