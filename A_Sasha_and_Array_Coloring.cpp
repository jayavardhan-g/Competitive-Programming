#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ans=0;
        vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int lo=0,hi=n-1;
        while(lo<=hi){
            ans+=v[hi]-v[lo];
            lo++;
            hi--;
        }
        cout<<ans<<endl;
    }
}