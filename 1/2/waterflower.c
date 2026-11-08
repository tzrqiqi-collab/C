/*水仙花数是指一个N位正整数(N>=3),它的每个位上的数字的N次幂之和等于它本身。例如:153=1**3+5**3+3**3。
本题要求编写程序
计算所有N位水仙花数。

输入格式:

输入在一行中给出一个正整数N(3 <= N <= 7)。

输出格式:

按递增顺序输出所有N位水仙花数,每个数字占一行。

输入样例:

3

输出样例:

153
370
371*/
#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int first=1,a;
    for(a=1;a<n;a++){
        first*=10;
    }
    a=first;
    while(a<first*10){
        int t=a;
        int sum=0;
        while(t>0){
            int d=t%10;
            t/=10;
            int p=1,j=0;
            while(j<n){
                j++;
                p*=d;
            }
            sum+=p;
        }
        if(sum==a){
            printf("%d\n",sum);
        }
        a++;

    }
}