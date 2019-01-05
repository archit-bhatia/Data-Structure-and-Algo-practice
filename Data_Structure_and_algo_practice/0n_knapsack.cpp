#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int dp[1001][1001];
int ans(int n,int s,int size[],int value[],int k)
{ //cout<<k<<endl;
   if(k>=n || s<=0)
   return 0 ;
   if(dp[s][k]!=-1) return dp[s][k];
       if(size[k]<=s)
       {   int q1 = ans(n,s,size,value,k+1) ;
           int q2 = value[k]+ans(n,s-size[k],size,value,k) ;
           dp[s][k] = max(q1,q2);
           return dp[s][k];
       }
       else{ dp[s][k]=ans(n,s,size,value,k+1) ; return dp[s][k];}
}

int main() {
    int n,s;
    cin>>n>>s;memset(dp,-1,sizeof(dp));
    int size[n],value[n];
    for(int j=1;j<=n;j++)
    {
        cin>>size[j-1];
    }
    for(int j=1;j<=n;j++)
    {
        cin>>value[j-1];
    }
    
    

    cout<<ans(n,s,size,value,0)<<endl;
}

