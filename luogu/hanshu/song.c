#include <stdio.h>
double fen(double sum,double m){
    double a;
    a=sum/m;
    return a;
}
int main(void) {
    int n,m;
    scanf("%d %d",&n,&m);
    double result=0;
    for(int i=1;i<=n;i++){
        int sum=0;
        int max=0,min=11;
        double temp=0;
        for(int j=1;j<=m;j++){
            scanf("%lf",&temp);
            if(temp>max)max=temp;
            if(min>temp)min=temp;
            sum+=temp;
        }
        sum-=(max+min);
        temp=fen(sum,m-2);
        if(temp>result)result=temp;
    }
    printf("%.2f",result);
    return 0;
}