#include<iostream>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin>>a[i][j];
  }}
  int b;
  cin>>b;
  bool flag=false;
  int i=n-1,j=0;
  while(i>=0 && j<=m-1){
    if(a[i][j]==b){
      flag = true;cout<<1<<endl;break;
    }
    else if(a[i][j]<b){
      j++;
    }
    else{
      i--;
    }
  }
  if(!flag){
    cout<<0<<endl;
  }
	return 0;
}
