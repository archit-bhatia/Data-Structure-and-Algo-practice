#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    char c[11];
    cin>>c;
    int len = strlen(c);
    ll ans = (1<<len) - 2;
    for(int i=0;i<len;i++){
        if(c[i]=='7'){
      ans += (1<<(len-i-1));
        }
    }
    cout<<ans+1;
}

