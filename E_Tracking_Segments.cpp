#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<pair<int,int>> lu(m);
    for(int i=0;i<m;i++)cin>>lu[i].first>>lu[i].second;
    vector<int> g(m);
    int q;cin>>q;
    vector<int> qr(q);
    for(int i=0;i<q;i++)cin>>qr[i];
    int ans=INT_MAX;
    for(int i=0;i<q;i++){
        for(int j=0;j<m;j++){
            if(q>=lu[j].first && q<=lu[j].second)g[j]+=2;
            if(g[j]>(lu[j].second-lu[j].first+1))ans=min(ans,i);
        }
    }
    if(ans==INT_MAX)ans=-2;
    cout<<ans+1<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
        // int n,m;cin>>n>>m;
        // vector<set<int>> v(n);
        // vector<pair<int,int>> w(m);
        // for(int i=0;i<m;i++){
        //     cin>>w[i].first>>w[i].second;
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=w[i].first-1;j<w[i].second;j++){
        //         v[j].insert(i);
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     w[i].second=w[i].second-w[i].first+1;
        //     w[i].first=0;
        // }
        // int q;cin>>q;
        // vector<int> qq(q);for(int i=0;i<q;i++)cin>>qq[i];
        // int ans=-1;
        // for(int i=0;i<q;i++){
        //     for(auto j=v[qq[i]-1].begin();j!=v[qq[i]-1].end();j++){
        //         w[*j].first++;
        //         w[*j].second--;
        //         if(w[*j].first>w[*j].second){
        //             ans=i+1;
        //             break;
        //         }
        //     }
        //     if(ans!=-1)break;
        // }
        // cout<<ans<<endl;
    }
}