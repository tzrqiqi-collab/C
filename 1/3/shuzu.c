#include <stdio.h>
int is_prime(int x) {
    if (x <= 1) return 0; // 1 和负数直接抬走
    for (int i = 2; i * i <= x; i++) { 
        if (x % i == 0) {
            return 0;
            // 填这里：如果被整除了，该怎么办？
        }
    }
    return 1;
    
    // 如果熬过了所有考验，该返回什么？
}

int main(void) {
    const int number=100;
    int prime[number];
    int count=0;
    int i=2;
    while(count<number){
        if(is_prime(i)){
            prime[count]=i;
            count++;
        }
        i++;
    }
    
    for(int i=0;i<number;i++){
        printf("%d\t",prime[i]);
        if((i+1)%5==0){
            printf("\n");
        }
    }
    return 0;
}