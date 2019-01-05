#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll rem[n]={0};
        ll cs=0;
        for(ll i=0;i<n;i++){
            cs += a[i];
            rem[((cs%n)+n)%n]++;
        }
        ll count = 0;
        for(ll i=0;i<n;i++){
           if(rem[i]>1)
           count += ((rem[i]*(rem[i]-1))/2);
        }
        count += rem[0];
        cout<<count<<endl;
    }
}

