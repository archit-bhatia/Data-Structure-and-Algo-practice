#include <bits/stdc++.h>
using namespace std;
void replacePi(string s,int n,int j){
    if(j>=n){
        return;
    }
    if(s[j]!='p')
    {cout<<s[j];
    return replacePi(s,n,j+1);}
    else if(j<=n-2 && s[j+1]=='i'){
        cout<<"3.14";
        return replacePi(s,n,j+2);
    }
    else{
        cout<<s[j];return replacePi(s,n,j+1);
    }
}
int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        //cout<<s<<endl;
        replacePi(s,s.length(),0);
        cout<<endl;
    }
}

