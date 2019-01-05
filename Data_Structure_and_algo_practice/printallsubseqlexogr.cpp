#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void printSubsequence(char* inp,char* out,int i,int j){
    //Base Case
    if(inp[i]=='\0')
    {
        out[j]='\0';
        v.push_back(out);return;
    }
    out[j]=inp[i];
     printSubsequence(inp,out,i+1,j+1);
     printSubsequence(inp,out,i+1,j);
}
int main() {
    int m;
    cin>>m;while(m--){
    char inp[100];
    cin>>inp;
    char out[100];
    printSubsequence(inp,out,0,0);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    v.clear();
}
}

