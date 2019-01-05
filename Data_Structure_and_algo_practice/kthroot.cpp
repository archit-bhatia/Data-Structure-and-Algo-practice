#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll power(ll x, ll y,ll n) 
{ 
    ll res = 1;      
    while(y--){
        if(res>n){return n+1;}
        res*=x;
    }
    return res;
} 
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    if(k==1)
    {cout<<n<<endl;continue;}
    ll s=1,e=sqrt(n);ll ans=0;
    ll m = (s+e)/2;
    while(s<=e){
        m = (s+e)/2;
      ll p = power(m,k,n);//cout<<p<<endl;
      if(p==n){
        ans=m;break;
      }
      else if(p>n){
        e = m-1;
      }
      else{
      s = m+1;}//cout<<m<<endl;
      if(p<n){ans=m;}
    }
    cout<<ans<<endl;
  }
}
