#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cout<< n+1-x<<' ';
    }
    cout<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}