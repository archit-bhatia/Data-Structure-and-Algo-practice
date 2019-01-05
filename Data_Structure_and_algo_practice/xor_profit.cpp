#include <iostream>
using namespace std;
#define ll long long int
int main() {
    ll x,y;
    cin>>x>>y;
    ll ans = 0,max=0;
    for(int i=x;i<=y;i++){
        ans = i^(i+1);
        if(ans>max)
        max = ans;
    }
    cout<<max<<endl;
}

