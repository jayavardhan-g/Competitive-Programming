#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int sol(int i,vector<int> v,vector<int> &dp){
    if(i==v.size()-1)return v[v.size()-1];
    if(i==v.size()-2)return v[v.size()-2];
    for(int j=2;(i+j)<v.size();j++){
        dp[i]=max(v[i]+sol(i+j,v,dp),dp[i]);
    }
    return dp[i];
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
        vector<int>dp(n,INT_MIN);
        cout<<max(sol(0,v,dp),sol(1,v,dp))<<endl;
    }
}