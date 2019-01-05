#include <bits/stdc++.h>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void print(char* in,char* out,int i,int j){//cout<<"out:"<<out<<endl;
if(in[i]=='\0'){
    out[j+1]='\0';
    cout<<out<<endl;
    return;
}
int num = in[i]-'0';
for(int k=0;k<table[num].length();k++){
 out[j]=table[num][k];
 print(in,out,i+1,j+1);
 
}
return;
}
int main() {
   char s[15];
   cin>>s;
   char out[15]="";
   print(s,out,0,0);
}

