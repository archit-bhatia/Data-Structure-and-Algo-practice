#include<iostream>
using namespace std;
int main() {
  int n;
  cin>>n;int res=0;int t;
  for(int i=0;i<n;i++){
    cin>>t;
    res = res^(t);
  }
  cout<<res<<endl;
	return 0;
}
