#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
    ll n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n-1];
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        b[i]=a[i+1]-a[i]-1;
    }
    sort(b,b+n-1);
    cout<<b[n-2]<<endl;
}
