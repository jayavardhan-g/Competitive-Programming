#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    int ans= m/2;
    ans*=n;
    cout<<ans<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}