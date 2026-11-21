#include <stdio.h>

int main(void) {
    int seat[25]={0};
    int n;
    scanf("%d",&n);
    for (int t = 0; t < n; t++) {
        int k;
        scanf("%d",&k);
        int found=0;
        for (int start = 1; start <= 21 - k; start++) {
            int ok = 1;            
            for (int j = 0; j < k; j++) {
                if (seat[start + j] == 1) {
                    ok = 0;
                    break;
                }
            }            
            if (ok == 1) {
                for (int j = 0; j < k; j++) {
                    seat[start + j] = 1;
                }
                printf("成功：%d-%d\n", start, start + k - 1);
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("失败\n");
        }
    }
    
    return 0;
}