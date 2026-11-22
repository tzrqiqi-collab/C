#include <stdio.h>
int isprime(int x){
    int a=1;
    if(x<2)return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            a=0;
            break;
        }
    }
    return a;
}
int main(void) {
    char a[105];
    scanf("%s",a);
    int maxcount=0,mincount=105;
    for(int i=0;a[i]!='\0';i++){
        int count=1;
        if(a[i]=='#')continue;
        for(int j=i+1;a[j]!='\0';j++){
            if(a[i]==a[j]){
                a[j]='#';
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
        }        
        if(mincount>count)mincount=count;
    }
    if(isprime(maxcount-mincount)){
        printf("Lucky Word\n%d\n",maxcount-mincount);
    }
    else{
        printf("No Answer\n0\n");
    }
    return 0;
}