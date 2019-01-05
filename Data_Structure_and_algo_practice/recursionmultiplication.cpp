#include <bits/stdc++.h>
using namespace std;
int mul(int a,int b){//cout<<a<<' '<<b<<endl;
    if(abs(a)==1){
        if(a>0)
        return b;
        else 
        return -b;
    }
    if(abs(b)==1){
        if(b>0)
        return a;
        else 
        return -a;
    }
    if(b>0)
    return a + mul(a,b-1);
    else
    return -a +  mul(a,b+1);
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b);
}

