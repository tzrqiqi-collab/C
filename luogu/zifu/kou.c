#include <stdio.h>
#include <string.h>

int main(void) {
    int i;
    scanf("%d", &i);
    int before = 0; // 记录上一题的类型
    
    for (int j = 0; j < i; j++) {
        char x[15];
        scanf("%s", x); // 探路先锋
        
        int a, b, res;
        char op; // 用来存 '+', '-', '*'
        
        if (x[0] >= 'a' && x[0] <= 'c') {
            before = x[0] - 'a'; // 更新类型
            scanf("%d %d", &a, &b);
        } else {
            sscanf(x, "%d", &a); // 把字符串 x 转为整数 a
            scanf("%d", &b);
        }
        
        // 【核心优化】根据 before 类型，统一计算 res 和 op
        // 不管你是刚读的，还是继承的上一题，都在这里集中处理
        if (before == 0) {
            op = '+';
            res = a + b;
        } else if (before == 1) {
            op = '-';
            res = a - b;
        } else {
            op = '*';
            res = a * b;
        }
        
        // 【输出】只写一次输出！
        // 1. 输出算式
        printf("%d%c%d=%d\n", a, op, b, res);
        
        // 2. 计算长度并输出
        char temp[50];
        sprintf(temp, "%d%c%d=%d", a, op, b, res);
        printf("%d\n", strlen(temp));
    }
    
    return 0;
}