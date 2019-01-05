#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int dp[1001][1001] = {0} ;
void printlcr(char* a, char* b,int m,int n);
void lcr(char* a, char* b)
{
    int m = strlen(a);
    int n = strlen(b);
     
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1; 
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    printlcr(a,b,m,n);
}
void printlcr(char* a, char* b,int m,int n)
{    char out[1001];int k=0;
    while(m>0 && n>0)
    {
        if(a[m-1]==b[n-1])
        {
            out[k++] = a[m-1];
            m--;n--;
        }
        else
        {
            if(dp[m-1][n]>dp[m][n-1])
            m--;
            else
            n--;
        }
    }
    out[k] = '\0' ;
    reverse(out,out+k);
    cout<<out<<endl;
}
int main() {
    char a[1001],b[1001];
    cin>>a>>b;
    lcr(a,b);
}

