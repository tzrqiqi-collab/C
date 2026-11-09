#include <stdio.h>

int main(void) {
    char x[20];
    scanf("%s",x);
    int i,sum=0,count=1;
    for(i=0;i<12;i++){
    if(x[i]>='0'&&x[i]<='9'){
        sum+=(x[i]-'0')*count;
        count++;
        }
    }
    int a=sum%11;
    char temp;
    if(a==10){
        temp='X';
    }
    else{
        temp=a+'0';
    }
    if(x[12]==temp){
        printf("Right");
    }
    else{x[12]=temp;
        printf("%s",x);}
    return 0;
}