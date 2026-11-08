#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int i,j,k;
    i=a;
    int count=0;
    while(i<=a+3){
        j=a;
        while(j<=a+3){
            k=a;
            while(k<=a+3){
                if(i!=j){
                    if(i!=k){
                        if(k!=j){
                            count++;
                            printf("%d%d%d",i,j,k);
                            if(count%6==0){
                                printf("\n");
                            }
                            else{
                                printf(" ");
                            }
                        }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
}