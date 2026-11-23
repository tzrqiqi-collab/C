#include <stdio.h>
#include <string.h>
int main(void) {
    int q;
    scanf("%d",&q);
    char a[10500]={0};
    scanf("%s",a);
    for(int i=1;i<=q;i++){
        int x;
        scanf("%d",&x);
        switch(x){
            case 1:{
                char temp[1000];
                scanf("%s",temp);
                strcat(a,temp);
                printf("%s\n",a);
                break;
            }
            case 2:{
                int start,end;
                scanf("%d %d",&start,&end);
                char temp[10500];
                strncpy(temp,&a[start],end);
                temp[end]='\0';
                strcpy(a,temp);
                printf("%s\n",a);
                break;
            }
            case 3:{
                int start;
                char temp[1005];
                scanf("%d",&start);
                scanf("%s",temp);
                strlen(temp);
                for(int j=strlen(a);j>=start;j--){
                    a[j+strlen(temp)]=a[j];
                }
                for(int j=0;j<strlen(temp);j++){
                    a[start+j]=temp[j];
                }
                printf("%s\n", a);
                break;
            }
            case 4:{
                char temp[10050];
                scanf("%s",temp);
                char *found=strstr(a,temp);
                if(found==NULL){
                    printf("-1\n");
                }
                else{
                    int k=found-a;
                    printf("%d\n",k);
                }
            }
        }
    }
    return 0;
}