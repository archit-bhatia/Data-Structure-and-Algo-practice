#include <bits/stdc++.h>
using namespace std;
bool safe(int a[][9],int i,int j,int n,int num){
    //check row and column
    for(int x=0;x<n;x++){
        if(a[i][x]==num || a[x][j]==num)
        return false;
    }
    int rn = sqrt(n);
    int sx=(i/rn)*rn;
    int sy = (j/rn)*rn;
    for(int x=sx;x<sx+rn;x++){
      for(int y=sy;y<sy+rn;y++){
        if(a[x][y]==num)
        return false;
    }  
    }
    return true;
}
bool sudokoSolver(int a[][9],int i,int j,int n){
    //Base Case
    if(i==n){
        //print
        for(int x=0;x<n;x++){
       for(int y=0;y<n;y++){
           cout<<a[x][y]<<" ";
       }cout<<endl;
   }
        return true;
    }
    //End of row
    if(j==n){
        return sudokoSolver(a,i+1,0,n);
    }
    //fixed number
    if(a[i][j]!=0){
        return sudokoSolver(a,i,j+1,n);
    }
    //Recursive Case
    for(int num=1;num<=n;num++){
        if(safe(a,i,j,n,num)){
            a[i][j]=num;
            bool possible = sudokoSolver(a,i,j+1,n);
            if(possible==true)
            return true;
        }
    }
    //backtrack
    a[i][j]=0;
    return false;
}
int main() {
   int n;
   cin>>n;
   int a[9][9];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>a[i][j];
       }
   }
   if(!sudokoSolver(a,0,0,n)){cout<<"Not";}
}

