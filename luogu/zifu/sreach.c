#include <stdio.h>
#include <string.h>
#include <ctype.h>
    char a[20];
    char x[1000010];
int main(void) {
    scanf("%s",a);
    getchar();
    fgets(x,sizeof(x),stdin);
    x[strcspn(x, "\n")] = '\0'; 
    for (int i = 0; a[i]; i++) a[i] = tolower(a[i]);
    for (int i = 0; x[i]; i++) x[i] = tolower(x[i]);
    for (int i = strlen(a); i >= 0; i--) a[i+1] = a[i];
    a[0] = ' ';
    strcat(a, " ");
    for (int i = strlen(x); i >= 0; i--) x[i+1] = x[i];
    x[0] = ' ';
    strcat(x, " "); 
    int count=0;
    int first_pos=-1;
    char *found=x;
    while((found=strstr(found,a))!=NULL){
        count++;
        if(first_pos==-1){
            first_pos=found-x;
        }
        found++;
    }
    if(count==0){
        printf("-1\n");
    }
    else{
        printf("%d %d\n",count,first_pos);
    }
    return 0;
}