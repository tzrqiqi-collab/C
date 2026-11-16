#include <stdio.h>

int main(void) {
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int a[105][105]={0};
    int x,y;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        //方向向量
        int dx[]={-2,-1,0,1,2,0,0,0,0,-1,-1,1,1};
        int dy[]={0,0,0,0,0,-2,-1,1,2,-1,1,-1,1};
        for(int j=0;j<13;j++){
            int nx=x+dx[j];
            int ny=y+dy[j];
            if(nx >= 1 && nx <= n && ny >= 1 && ny <= n){
                a[nx][ny]=1;
            }
        }
    }
    for(int i=1;i<=k;i++){
        scanf("%d %d",&x,&y);
        for(int dx=-2;dx<=2;dx++){
            for(int dy=-2;dy<=2;dy++){
                int nx = x + dx;
                int ny = y + dy;
                if(nx >= 1 && nx <= n && ny >= 1 && ny <= n){
                    a[nx][ny] = 1;
                }
            }
        }
    }
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j] == 0){
                count++;
        }   }
    }
    printf("%d\n",count);
    return 0;
}