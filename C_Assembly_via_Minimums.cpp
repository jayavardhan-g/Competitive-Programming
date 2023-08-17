#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> v((n*(n-1))/2);
    for(int i=0;i<(n*(n-1))/2 ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}