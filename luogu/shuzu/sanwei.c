#include <stdio.h>

int main(void) {
    int w,x,h,q;
    scanf("%d %d %d",&w,&x,&h);
    scanf("%d",&q);
    int a[25][25][25]={0};
    int i,j,k;
    for(i=1;i<=q;i++){
        int x1,y1,z1,x2,y2,z2;
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(int dx=x1;dx<=x2;dx++){
            for(int dy=y1;dy<=y2;dy++){
                for(int dz=z1;dz<=z2;dz++){
                    a[dx][dy][dz]=1;
                }
            }
        }
    }
    int count=0;
    for(i=1;i<=w;i++){
        for(j=1;j<=x;j++){
            for(k=1;k<=h;k++){
                if(a[i][j][k]==0)count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}