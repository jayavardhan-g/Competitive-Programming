#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    int temp=v[n-1];
    int hi=v[n-1];
    for(int i=n-2;i>=0;i--){
        temp=temp^v[i];
        hi=max(hi,temp);
    }
    cout<<hi<<endl;

}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}