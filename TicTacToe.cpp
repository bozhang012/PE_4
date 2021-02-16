#include<iostream>
using namespace std;
void CreateBoard(int board[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=1;
        }
    }
}
int main(){
    int board[3][3];
    CreateBoard(board);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}