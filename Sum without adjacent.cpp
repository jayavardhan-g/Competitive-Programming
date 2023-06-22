#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
//recursive - takes more time
int sol(int i,vector<int> v,vector<int> &dp){
    if(i==v.size()-1)return v[v.size()-1];
    if(i==v.size()-2)return v[v.size()-2];
    int M=INT_MIN;
    for(int j=2;(i+j)<v.size();j++){
        M=max(M,sol(i+j,v,dp));
    }
    return dp[i]=M+v[i];
}

//pick non pick solution
int pnp(int i, vector<int> v,vector<int> &dp){
    if(i==0)return v[i];
    if(i<0)return 0;
    if(dp[i]!=-1)return dp[i];

    int pick=v[i]+pnp(i-2,v,dp);
    int npick= pnp(i-1,v,dp);
    return dp[i]=max(pick,npick);
}

//tabulation - bottom up approach
int tabulation(vector<int> v){
    vector<int> dp(v.size(),0);
    dp[0]=v[0];
    for(int i=1;i<v.size();i++){
        int p;
        if(i<2)p=v[i];
        else p=dp[i-2]+v[i];
        int np=dp[i-1];
        dp[i]=max(p,np);
    }
    return dp[v.size()-1];
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
        vector<int>dp(n,-1);
        // cout<<max(sol(0,v,dp),sol(1,v,dp))<<endl;
        // cout<<pnp(n-1,v,dp)<<endl;
        cout<<tabulation(v)<<endl;
    }
    
}