#include <stdio.h>
int main(void){
    const int size =3;
    int board[size][size];
    int i,j;
    int numOfx;
    int numOfO;
    int result=-1;//-1没人应 1x赢 0y
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&board[i][j]);
        }
    }
    for(i=0;i<size&&result==-1;i++){
        numOfO=numOfx=0;
        for(j=0;j<size;j++){
            if(board[i][j]==1){
                numOfx++;
            }
            else{
                numOfO++;
            }
        }
        if(numOfO==size){
            result=0;
        }
        else if(numOfx==size){
            result=1;
        }
    }
    for(j=0;j<size&&result==-1;j++){
        numOfO=numOfx=0;
        for(i=0;i<size;i++){
            if (board[i][j]==1){
            numOfx++;
            }
            else{
            numOfO++;
            }
        }
        if(numOfO==size){
            result=0;
        }
        else if(numOfx==size){
            result=1;
        }
    }
        // 主对角线
    if(result == -1){
        numOfO=numOfx=0;
        for(i=0;i<size;i++){
            if(board[i][i]==1) numOfx++;
            else numOfO++;
        }
        if(numOfO==size) result=0;
        else if(numOfx==size) result=1;
    }
    // 副对角线
    if(result == -1){
        numOfO=numOfx=0;
        for(i=0;i<size;i++){
            if(board[i][size-1-i]==1) numOfx++;
            else numOfO++;
        }
        if(numOfO==size) result=0;
        else if(numOfx==size) result=1;
    }
    if(result==1) printf("X 赢了！\n");
    else if(result==0) printf("O 赢了！\n");
    else printf("平局或者还没结束\n");
    return 0;

}