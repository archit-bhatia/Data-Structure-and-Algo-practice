#include <bits/stdc++.h>
using namespace std;
vector<char> v;
void printSubsequence(char* inp,char* out,int i,int j){
    //Base Case
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<",";return;
    }
    out[j]=inp[i];
     printSubsequence(inp,out,i+1,j+1);
     printSubsequence(inp,out,i+1,j);
}
int main() {
    char inp[100];
    cin>>inp;
    char out[100];
    printSubsequence(inp,out,0,0);
}

