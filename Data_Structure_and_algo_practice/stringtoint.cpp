#include <bits/stdc++.h>
using namespace std;
int stringToInteger(char s[],int n){//cout<<s<<endl;
    if(n==1){//cout<<s+1<<endl;
       return(s[0]-'0');
    }
    int x = stringToInteger(s,1)*pow(10,n-1) + stringToInteger(s+1,n-1);//cout<<x<<endl;
    return x;
}
int main() {
    string s;
    cin>>s;
   // s.shrink();
    char c[s.length()];
    for(int i=0;i<s.length();i++){
        c[i] = s[i];
    }
    int n = stringToInteger(c,s.length());
    cout<<n;
}

