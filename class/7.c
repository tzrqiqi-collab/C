#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a[500005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int best = a[0];
    int bestCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > bestCount) {
            bestCount = count;
            best = a[i];
        }
    }

    printf("%d\n", best);
    return 0;
}