#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void printAsciiSubsequence(string input,string output){
    if(input==""){
      //cout<<output<<" ";
      //c++;
      v.push_back(output);
      return;
    }
    printAsciiSubsequence(input.substr(1),output);
    printAsciiSubsequence(input.substr(1),output+input[0]);
    printAsciiSubsequence(input.substr(1),output+to_string(int(input[0])));
}
int main() {
    string a;
    cin>>a;
    printAsciiSubsequence(a,"");
    cout<<v.size()<<" ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

