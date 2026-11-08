#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // 坑点1解决：先排序，保证 a <= b <= c
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    
    // 判断是否能组成三角形：任意两边之和大于第三边 (排好序后，只需要判断 a + b > c 即可)
    if (a + b <= c) {
        printf("Not triangle\n");
        return 0; // 不是三角形，后面的都不用判断了，直接结束程序
    }
    
    // 能走到这里，说明一定是三角形了，开始判断类型
    // 注意：这里用平行的 if，因为一个三角形可能有多个属性
    
    // 1. 判断直角：两短边平方和 == 长边平方
    if (a * a + b * b == c * c) {
        printf("Right triangle\n");
    }
    // 2. 判断锐角：两短边平方和 > 长边平方
    else if (a * a + b * b > c * c) {
        printf("Acute triangle\n");
    }
    // 3. 判断钝角：两短边平方和 < 长边平方
    else if (a * a + b * b < c * c) {
        printf("Obtuse triangle\n");
    }
    
    // 4. 判断等腰：只要有两条边相等就行（因为已经排好序了，所以 a==b 或 b==c 即可）
    if (a == b || b == c) {
        printf("Isosceles triangle\n");
    }
    
    // 5. 判断等边：三条边都相等
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    
    return 0;
}