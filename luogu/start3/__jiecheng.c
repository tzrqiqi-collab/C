#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int fact[100]={1,0},i,sum[100]={0};
    for(i=1;i<=n;i++){
        int carry = 0; // 进位，一开始是 0
        for(int j = 0; j < 100; j++) {
        int temp = fact[j] * i + carry; // 当前位乘 i，加上进位
        fact[j] = temp % 10;            // 留下的个位
        carry = temp / 10;              // 下次用的进位
        }
        carry=0;
        for(int j=0;j<100;j++){
            int temp=sum[j]+fact[j]+carry;
            sum[j]=temp%10;
            carry=temp/10;
        }
        
    }
    int start=99;
    while(start>0&&sum[start]==0){
        start--;
    }
    for(i=start;i>=0;i--){
        printf("%d",sum[i]);
    }
    return 0;
}