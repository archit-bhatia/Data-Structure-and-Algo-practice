#include <bits/stdc++.h>
using namespace std;
#define ll long long int
set<string> v;
char encode(int n){//cout<<(char)(107);
      return (char)(96+n);
}
void decode(ll n,string out){//cout<<n<<endl;
    //Base Case
    if(n==0){v.insert(out);
        //cout<<out<<endl;
    return;}
    if(n<10){
        out = encode(n)+out;
        v.insert(out);
        //cout<<out<<endl;
        return;
    }
    //Including last character first if it is not 0
    if(n%10!=0){
        //out += encode(n%10);
        decode(n/10,encode(n%10)+out);
    }
    if((n%100)/10==1 || ((n%100)/10==2 && n%10<=6)){
        //out += encode(n%100);
        decode(n/100,encode(n%100)+out);
    }   
    return;
} 
int main() {
    ll n;
    cin>>n;
    string out="";
     decode(n,"");
     //cout<<v.size()<<endl;
     //sort(v.begin(),v.end());
     int j=0;int size=v.size();
     cout<<"[";
     for(auto i:v){
         if(j==(size-1)){
             cout<<i<<"]"<<endl;break;
         }
         cout<<i<<", ";
         j++;
     }
     return 0;
}

