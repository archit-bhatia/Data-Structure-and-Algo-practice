#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
bool check(ll a[],ll mid,ll k,ll n){//cout<<mid<<endl;
   ll na=0;ll i=0;
   while(na<=k && i<=(n-1)){
       ll q=0;
       while((q+a[i])<=mid && i<n){
                q+=a[i];
                i++;
            }//cout<<q<<endl;
            na++;
       }
      // cout<<"i="<<i<<"na="<<na<<endl;
   if(i==n && na<=k){
       return(true);}
   else{
       return(false);}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        ll k,n;
        cin>>k>>n;
        ll a[n];ll sum=0;
        for(ll i=0;i<n;i++){
           cin>>a[i];sum+=a[i];
        }
      //  sort(a,a+n);
      //  cout<<sum<<"\n";
    ll s=a[n-1],e=sum;
    ll mid = (s+e)/2;
    ll ans = mid;
   while(s<=e){//cout<<"yo";
        mid = (s+e)/2;
        if(check(a,mid,k,n)){
            e = mid-1;
            ans=mid;
        }
        else {
            s = mid+1;
        }
    }
    cout<<ans<<endl;
return 0;    
}

