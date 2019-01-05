#include <bits/stdc++.h>
using namespace std;
set<string> v;
void printAllUniquePermutation(char* a,int i){
    //Base Case when no character left
    if(a[i]=='\0'){//cout<<a<<"\n"; 
        v.insert(a);
        return;
    }
    //recursive case
    for(int j=i;a[j]!='\0';j++){
        // Swapping i th character with the j th character only if they are different
       if(i!=j && a[i]==a[j]){continue;}

        swap(a[i],a[j]);
        //Call for next sub problem
        printAllUniquePermutation(a,i+1);
        //Backtrack
        swap(a[i],a[j]);
    }
}
int main() {
    char str[10];
    cin>>str;
   // sort(str,str+strlen(str));
    printAllUniquePermutation(str,0);
    for(auto i:v){
        cout<<i<<endl;
        
    }
        
    }

