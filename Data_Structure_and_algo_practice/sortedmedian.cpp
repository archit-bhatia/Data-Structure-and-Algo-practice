#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int median(int arr[], int s, int e) 
{ int n = e-s+1;
    if (n % 2 == 0) 
        return (arr[(s+e) / 2] +  
                arr[(s+e) / 2 +1]) / 2; 
    else
        return arr[(s+e) / 2]; 
} 
int medianSearch(int a[],int b[],int s1,int e1,int s2,int e2){
    if((e1-s1)==0){return (a[0]+b[0])/2;}
    int m1 = median(a,s1,e1);
    int m2 = median(b,s2,e2);
    if(m1==m2)
    return m1;
    //cout<<s1<<" "<<e1<<" "<<s2<<" "<<e2<<endl;cout<<m1<<" "<<m2<<endl;
    if((e1-s1)==1){//cout<<"yo"<<(max(a[s1],b[s2]) + min(a[e1],b[e2]))<<endl;
        return (max(a[s1],b[s2]) + min(a[e1],b[e2]))/2;
    }
   int n = e1-s1+1;
    

    if(m1>m2){//cout<<(s1+e1)/2<<"yo";
        if(n&1)
        return medianSearch(a,b,s1,(s1+e1)/2,(s2+e2)/2,e2);
        return medianSearch(a,b,s1,1+(s1+e1)/2,(s2+e2)/2,e2);
    } 
    else{
        if(n&1)
        return medianSearch(a,b,(s1+e1)/2,e1,s2,(s2+e2)/2);
        return medianSearch(a,b,(s1+e1)/2,e1,s2,1+(s2+e2)/2);
    }
    
}
int main(){
    ll n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<medianSearch(a,b,0,n-1,0,n-1)<<endl;
}
