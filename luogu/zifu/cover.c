#include <stdio.h>
#include <string.h>
int main(void) {
    int l;
    scanf("%d",&l);
    char a[300];
    scanf("%s",a);
    int n=strlen(a);
    int boy=0,girl=0;
    for(int i=0;i<n;i++){
        if (a[i] == 'b' || (i + 1 < n && a[i+1] == 'o') || (i + 2 < n && a[i+2] == 'y')) {
            boy++;
        }
        if (a[i] == 'g' || (i + 1 < n && a[i+1] == 'i') || (i + 2 < n && a[i+2] == 'r') || (i + 3 < n && a[i+3] == 'l')) {
            girl++;      
    }
    }
    printf("%d\n%d",boy,girl);
    return 0;
}