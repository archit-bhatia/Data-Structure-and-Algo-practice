#include<bits/stdc++.h>
using namespace std;
bool checkpalin(char input[]){
    if(input[0]=='\0')
    return true;
    int len = strlen(input);
    if(input[0]!=input[len-1]){
        return false;
    }
    input[len-1]='\0';
    return checkpalin(input+1);
}
int main() {
  char c[100];
  cin>>c;
  cout<<checkpalin(c);
	return 0;
}
