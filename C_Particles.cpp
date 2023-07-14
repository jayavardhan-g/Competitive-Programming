#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int rec(int i,vector<int> &v,vector<int> &dp){

    
}

void solve(){
    int n;cin>>n;
    vector<int> v(n+2);for(int i=1;i<n+1;i++)cin>>v[i];
    vector<int> dp(n+2,-1);
    cout<<rec(n,v,dp);
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}