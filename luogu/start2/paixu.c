#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int temp;
    
    // 1. 保证 a <= b
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    
    // 2. 保证 a <= c （现在 a 肯定是三个数里最小的）
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    
    // 3. 保证 b <= c （最后收拾剩下的两个）
    if (b> c) {
       temp=c;c=b;b=temp;
    }
    
    // 输出
    printf("%d %d %d\n", a, b, c);
    return 0;
}