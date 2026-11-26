#include <stdio.h>

int main(void) {
    int sum1=1,sum2=1;
    char ufo[7];
    char zu[7];
    scanf("%s",ufo);
    scanf("%s",zu);
    for(int i=0;ufo[i]!='\0';i++){
        ufo[i]=ufo[i]-'A'+1;
        sum1*=ufo[i];
    }
    for(int i=0;zu[i]!='\0';i++){
        zu[i]=zu[i]-'A'+1;
        sum2*=zu[i];
    }
    sum1%=47;
    sum2%=47;
    if(sum1==sum2){
        printf("GO");
    }
    else{
        printf("STAY");
    }

    return 0;
}