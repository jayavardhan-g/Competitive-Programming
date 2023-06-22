#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n;cin>>n;
    int j;cin>>j;
    int l;
    cout<<1;
    for(int i=1;i<n;i++){
        cin>>l;
        if(l>=j){
            cout<<1;
            j=l;
        }else cout<<0;
    }
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}