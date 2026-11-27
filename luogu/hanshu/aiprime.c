#include <stdio.h>

int is_prime[100005]; // 全局数组默认全为 0

int main(void) {
    int n, x;
    scanf("%d", &n);
    
    // 1. 预处理：把 2 到 100000 里的合数标记为 1
    for (int i = 2; i * i <= 100000; i++) {
        if (!is_prime[i]) {          // 如果 i 是 0，说明 i 是质数
            for (int j = i * i; j <= 100000; j += i) {
                is_prime[j] = 1;     // 把 i 的倍数标记为 1（合数）
            }
        }
    }
    
    // 2. 读入数据并输出
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        // x>=2 且 标记为 0，就是质数
        if (x >= 2 && !is_prime[x]) { 
            printf("%d ", x);
        }
    }
    return 0;
}