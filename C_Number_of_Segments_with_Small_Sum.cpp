#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int seg(int n){
    return (n*(n+1))/2;
}

int32_t main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(n+1,0);for(int i=1;i<n+1;i++)cin>>v[i];
    for(int i=1;i<n;i++){
        v[i]=v[i-1]+v[i];
    }
    int ans=0;
    int l=0,r=1;
    while(l<=r && l<=n && r<=n){
        if(r<n && v[r]-v[l]<=k){
            ans++;
            r++;
        }
        else {
            l++;
            if(v[])
        }
    }
    cout<<ans;
}