#include <iostream>
using namespace std;
int count=0;
bool isSafe(int board[][20],int n,int i,int j){
    //check column above
    for(int c=0;c<=i;c++){
        if(board[c][j]==1)
        return false;
    }
    //check right diagonal
    int x = i,y = j;
    while(x>=0 && y<=n){
        if(board[x][y]==1)
        return false;
        x--;y++;
    }

    //check left diagonal
    x = i,y = j;
    while(x>=0 && y>=0){
        if(board[x][y]==1)
        return false;
        x--;y--;
    }
    return true;
}
void countQueen(int board[][20],int i,int n){
 //Base Case
 if(i==n){
     count++;
     return;
 }
 //Recursive Case
 for(int c=0;c<n;c++){
     if(isSafe(board,n,i,c)){
         board[i][c]=1;
         countQueen(board,i+1,n);
         board[i][c]=0;
     }
 }
 return;
}
bool dispQueen(int board[][20],int i,int n){
 //Base Case
 if(i==n){int k,l;
     for(k=0;k<n;k++){
         for(l=0;l<n;l++){
         if(board[k][l]==1)
         break;
     }
     cout<<"{"<<k+1<<"-"<<l+1<<"} ";
     }
     cout<<endl;
     return false;
 }
 //Recursive Case
 for(int c=0;c<n;c++){
     if(isSafe(board,n,i,c)){
         board[i][c]=1;
         bool yo=dispQueen(board,i+1,n);
         board[i][c]=0;
     }
 }
 return false;
}
int main() {
    int n;
    cin>>n;
    int board[20][20]={0};
    countQueen(board,0,n);
    cout<<count<<endl;
    bool yo = dispQueen(board,0,n);
}

