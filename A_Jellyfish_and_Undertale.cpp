#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int a,b,n;
    if(b==0){
        cout<<0<<endl;
        return;
    }
    cin>>a>>b>>n;
    int r=0;
    r+=b;
    while(n--){
        cin>>b;
        if(b>=a-1){
            r+= a-1;
        }else r+=b;
    }
    cout<<r<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}