#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
        ll n,m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i] = a[i]%m;
        }
        sort(a,a+n);
        set<ll> rem;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            if(a[i]%m==0){
               cout<<"YES"<<endl;return 0;
            }
            
            for(auto t: rem){
                if((a[i]+t)%m==0){
                  cout<<"YES"<<endl;return 0;  
                }
               v.push_back((a[i]+t)%m);
            }
            v.push_back(a[i]);for(auto t: v){
                
                 rem.insert(t); 
                }v.clear();
        }
        cout<<"NO"<<endl;
    
}

