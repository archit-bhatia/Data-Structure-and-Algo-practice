#include <iostream>
using namespace std;
int main() {
    int n,w;
    cin>>n>>w;
    int value[w+1]; //correction -> size should be w+1 instead of n
    for(int i=1;i<=w;i++) // correction -> loop till w
    {
        cin>>value[i];
    }
    int dp[w+1];
    dp[0] = 0;
for(int i=1; i<=w; i++) // correction -> initialize all elements of dp array with value array elements
  {
    dp[i] = value[i];
  }
    for(int j=2;j<=w;j++)
    {  // int temp = value[j-1];
        for(int k=0;k<j;k++)
        {
           // if(temp==-1 && dp[k]!=-1 && dp[j-k]!=-1 )
                 // temp = dp[k]+dp[j-k];
           // else if(temp!=-1 && dp[k]!=-1 && dp[j-k]!=-1 ) temp = min(temp,dp[k]+dp[j-k]);     
              
             // cout<<j<<" "<<temp<<endl;
			  if(value[j-k] == -1  || dp[k] == -1){
				continue;
			  }
				if(dp[j] == -1)
				dp[j] = dp[k] + value[j-k];
				else
				dp[j] = min(dp[j], dp[k] + value[j-k]);
          }
         // dp[j] = temp;//cout<<dp[j]<<endl;
        }
        cout<<dp[w]<<endl;
    }

