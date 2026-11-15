#include <stdio.h>

int main(void) {
    int n;
    char s[105];
    char num[10][5][4]={
        {"XXX", "X.X", "X.X", "X.X", "XXX"}, // 0
        {"..X", "..X", "..X", "..X", "..X"}, // 1
        {"XXX", "..X", "XXX", "X..", "XXX"}, // 2
        {"XXX", "..X", "XXX", "..X", "XXX"}, // 3
        {"X.X", "X.X", "XXX", "..X", "..X"}, // 4
        {"XXX", "X..", "XXX", "..X", "XXX"}, // 5
        {"XXX", "X..", "XXX", "X.X", "XXX"}, // 6
        {"XXX", "..X", "..X", "..X", "..X"}, // 7
        {"XXX", "X.X", "XXX", "X.X", "XXX"}, // 8
        {"XXX", "X.X", "XXX", "..X", "XXX"}  // 9        
    };
    scanf("%d",&n);
    scanf("%s",s);
    for(int row=0;row<5;row++){
        for(int i=0;i<n;i++){
            int d=s[i]-'0';
            printf("%s",num[d][row]);
            if(i<n-1){
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}