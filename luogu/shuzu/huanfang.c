#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[45][45]={0};
    int x=0,y=n/2;
    a[0][y]=1;
    for(int k=2;k<=n*n;k++){
        if(x==0&&y!=n-1){
            x=n-1;
            y=y+1;
        }
        else if(x!=0&&y==n-1){
            x=x-1;
            y=0;
        }
        else if (x == 0 && y == n - 1) {
            x = x + 1;
        }
        else if (x != 0 && y != n - 1) {
            if (a[x - 1][y + 1] == 0) {
                x = x - 1;
                y = y + 1;
            } else {
                x = x + 1;
            }
        }
        a[x][y]=k;        
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            if (j < n - 1) printf(" ");
        }
        printf("\n");
    }    
    
    return 0;
}