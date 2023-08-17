#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n;cin>>n;
    int x,e=0,o=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)e++;
        else o++;
    }
    if(o%2==0)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}