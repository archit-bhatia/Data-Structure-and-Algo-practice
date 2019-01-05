#include <bits/stdc++.h>
using namespace std;
int tiles(int n){
    if(n<4){
        return 1;
    }
    if(n==4){
        return 2;
    }
    int x =  tiles(n-1);
    int y =  tiles(n-4);
    return x+y;
}
int main() {
    int n;
    cin>>n;
    cout<<tiles(n);
}

