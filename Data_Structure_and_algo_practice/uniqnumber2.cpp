#include<iostream>
using namespace std;
void unique2(int a[],int n){
  int res=0;
  for(int i=0;i<n;i++){
    res = res^a[i];
  }
  int i=0;
  int temp = res;
  while(temp){
    if(temp&1){
      break;
    }
    i++;
    temp>>1;
  }
  int mask = 1<<i;
  int firstNum=0;
  for(int i=0;i<n;i++){
    if((a[i]&mask)!=0){
      firstNum = firstNum^a[i];
    }
  }
  int secondNum = res^firstNum;
  cout<<secondNum<<" "<<firstNum<<endl;
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  unique2(a,n);
	return 0;
}
