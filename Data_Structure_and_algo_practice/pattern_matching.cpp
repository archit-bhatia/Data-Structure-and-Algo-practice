#include <bits/stdc++.h>
using namespace std;


bool match(char* a,char* b)
{ 
    int m = strlen(a);
    int n = strlen(b);

    if(n==0) return (n==0) ;

   bool dp[m+1][n+1];
   memset(dp,false,sizeof(dp));
   dp[0][0] = true;

    for(int i=1;i<=n;i++)
      if(b[i-1]=='*') dp[0][i]=dp[0][i-1];

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(b[j-1]=='?' || a[i-1]==b[j-1]) { dp[i][j] = dp[i-1][j-1] ; }

            else if(b[j-1]=='*') { dp[i][j] = dp[i-1][j] || dp[i][j-1] ; }

            else { dp[i][j] = false ; }
        }
    }

    return dp[m][n];
    
}
int main() {
    char a[100001],b[100001];
    cin>>a;
    cin>>b;
    cout<<match(a,b)<<endl;
}

