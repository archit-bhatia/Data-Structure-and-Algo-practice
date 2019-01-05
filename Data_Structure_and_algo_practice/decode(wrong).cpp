#include <bits/stdc++.h>
using namespace std;
char out[]="";
char encode(int n){//cout<<(char)(107);
      return (char)(96+n);
}
void printVector(vector<char> v){
    int i=0;
    while(i<v.size()){
        cout<<v[i];i++;
    }
}
void decode(vector<int> a,int n,int j,vector<char> v /*,char out[]*/){
    //There are 2 Base Cases
    //First is single length
    if(n==1){
        printVector(v);
        cout<<encode(a[j])<<endl;
         //strcpy(out,"");
         return;

    }
    //Second Base Case is of length 2
    if(n==2){//cout<<"yo";
        if(a[j+1]!=0){//cout<<"out::"<<out<<endl;
        printVector(v);
        cout<<encode(a[j])<<encode(a[j+1])<<endl;}
        /*a[0]*10 + a[1]*/
        if(a[j]==1 || (a[j]==2 && a[j+1]<=6)){//cout<<"yo";
        printVector(v);
            cout<<encode(a[j]*10 + a[j+1])<<endl;
        }
       // strcpy(out,"");
        return;
    }
    while(j!=v.size()){v.pop_back();}
    //Recursive Case
    if(a[j+1]!=0){
    //out[j]=encode(a[j]);//cout<<"out:"<<out<<endl;
    v.push_back(encode(a[j]));
    decode(a,n-1,j+1,v/*,out*/);}
    if(n>2 && a[j+2]==0){return;}
    if(a[j]>=1 || (a[j]==2 && a[j+1]<=6)){
       /*if(out[j+1]!='\0'){ 
    out[j+1]='\0';}*/
    while(j!=v.size()){v.pop_back();}
    //out[j]=encode(a[j]*10 + a[j+1]);
    v.push_back(encode(a[j]*10 + a[j+1]));
    //cout<<"null:"<<out<<endl;
    decode(a,n-2,j+2,v/*,out*/);
}
} 
int main() {
    int n;
    cin>>n;
    vector<int> v;
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    //cout<<v[4];
    //char s[100]="";
    vector<char> s;
    //cout<<s.size();
    decode(v,v.size(),0,s);
   //cout<<v[0]<<encode(v[0])<<encode(v[1])<<endl;
   //char q[100]="string";q[1]='\0';
   //cout<<q;
}

