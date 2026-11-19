#include <stdio.h>
    int n;
    char a[15][15]={0},temp[15][15],b[15][15],tmp[15][15];

int check(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (temp[i][j] != b[i][j]) return 0;
        }
    }
    return 1;    
}
int z90(){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[j][n - 1 - i] = a[i][j];
    return check();    
}
int z180() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - i][n - 1 - j] = a[i][j];
    return check();
}
int z270() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - j][i] = a[i][j];
    return check();
}
int reflect() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][n - 1 - j] = a[i][j];
    return check();
}
int zuhe(){
    reflect();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            tmp[i][j] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = temp[i][j];
    int flag=0;
    if(z90())flag=1;
    else if(z180())flag=1;
    else if(z270())flag=1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = tmp[i][j];
    return flag;         
}
int noChange() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][j] = a[i][j];
    return check();
}
int main(void) {
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%s",b[i]);
    }
    if (z90())  { printf("1\n"); return 0; }
    if (z180()) { printf("2\n"); return 0; }
    if (z270()) { printf("3\n"); return 0; }
    if (reflect())   { printf("4\n"); return 0; }
    if (zuhe()) { printf("5\n"); return 0; }
    if (noChange())  { printf("6\n"); return 0; }   
    printf("7\n");
    return 0;
}