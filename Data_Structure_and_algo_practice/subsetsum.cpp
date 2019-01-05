#include <iostream>
using namespace std;
#define ll long long int
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
     ll range = (1<<n)-1;
     ll sum = 0;ll j=0,i;
     for(ll ii=1;ii<=range;ii++){
         sum=0;j=0;i=ii;
        while(i>0){
            if(i&1){
                sum += a[j];
            }
            j++;i = i>>1;
        }
        if(sum==0)
            break;
          //  cout<<i<<endl;
     }
     if(sum==0){
         cout<<"Yes\n";
     } 
     else
     cout<<"No\n";
    }
}

