#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int qs(vector<int> &v,int lo,int hi){
    bool x=1;
    int mm=v[hi],M=v[hi];
    for(int i=lo;i<hi;i++){
        if(v[i]>v[i+1]){
            x=0;
        }
        mm=min(mm,v[i]);
        M=max(M,v[i]);
    }
    if(x)return 0;

    int m= (mm+M+1)/2;
    vector<int> l,r;
    for(int i=lo;i<=hi;i++){
        if(v[i]<m)l.push_back(v[i]);
        else if(v[i]>=m) r.push_back(v[i]);
    }

    return 1+qs(l,0,l.size()-1) + qs(r,0,r.size()-1);
}

void solve(){
    int  n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    cout<<qs(v,0,n-1)<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}