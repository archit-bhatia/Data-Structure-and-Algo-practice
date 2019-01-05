#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int ans(int n,int s,int size[],int value[],int k)
{ //cout<<k<<endl;
int dp[n+1][s+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++)
    {
        if(i==0 || j==0)
        dp[i][j] = 0;
        else if(size[i-1]<=j)
        {
            dp[i][j] = max(value[i-1]+dp[i-1][j-size[i-1]],dp[i-1][j]);
        }
        else{
            dp[i][j] = dp[i-1][j];
        }
    }
}
   return dp[n][s];
}

int main() {
    int n,s;
    cin>>n>>s;
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

