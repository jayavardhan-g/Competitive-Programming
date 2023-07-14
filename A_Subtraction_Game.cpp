#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>1){
            cout<<1;
        }else{
            cout<<b+1;
        }
        cout<<endl;
    }
}