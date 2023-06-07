#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define int long long

int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        int q;cin>>q;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)cin>>v[i];
        int a=0;
        for(int i=0;i<n;i++){
            int d=0;
            while(v[i]<=q && i<n){
                d++;
                i++;
            }
            if(d>=k)a+=sum(d-k+1);    
        }
        cout<<a<<endl;
    }
}