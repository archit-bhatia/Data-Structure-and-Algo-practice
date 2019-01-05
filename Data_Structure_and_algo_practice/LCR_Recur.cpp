#include <bits/stdc++.h>
using namespace std;
int lcr_Recursive(char* a,char* b,int i,int j,int k)
{
    int m = strlen(a),n = strlen(b);
    if(i==m || j==n )
    return 0;

    if(a[i] == b[j])
    return 1 + lcr_Recursive(a,b,i+1,j+1,k);
    else
    {   if (k>0)
        return max(lcr_Recursive(a,b,i+1,j,k),max(lcr_Recursive(a,b,i,j+1,k),1+lcr_Recursive(a,b,i+1,j+1,k-1))) ;
        else
        return max(lcr_Recursive(a,b,i+1,j,k),lcr_Recursive(a,b,i,j+1,k));
    }
}
int main() {
    char a[1001],b[1001];
    cin>>a>>b;
    cout<<lcr_Recursive(a,b,0,0,5)<<endl;
}

