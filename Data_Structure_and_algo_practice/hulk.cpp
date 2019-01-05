#include<bits/stdc++.h>
using namespace std;
int setbits(int n){
    int c=0;
    while(n){
        c++;
        n = n&(n-1);
    }
    return c;
}
int main() {
  int t;
  cin>>t;
  int n;
  for(int i=0;i<t;i++){
      cin>>n;
      cout<<setbits(n)<<endl;
  }
	return 0;
}
