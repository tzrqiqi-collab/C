#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int a[15][15]={0};
    int count=0,i;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x=0,y=0;
    int dir=0;
    for(i=1;i<=n*n;i++){
        a[x][y]=i;
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny] != 0) {
            dir = (dir + 1) % 4; // 转向
            nx = x + dx[dir];
            ny = y + dy[dir];
        }
        x=nx;
        y=ny;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", a[i][j]); 
        }
        printf("\n");
    }    
    return 0;
}