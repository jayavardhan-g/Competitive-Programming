#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int mem(int i,vector<int> &f,vector<int> &dp){
    if(i<0)return 0;
    if(dp[i]!=-1)return dp[i];
    int p=f[i]+mem(i-2,f,dp);
    int np=mem(i-1,f,dp);
    return dp[i]=max(p,np);
}

int32_t main(){
    int n;cin>>n;
    int M=INT_MIN;
    vector<int> v(n);for(int i=0;i<n;i++){
        cin>>v[i];
        M=max(M,v[i]);
    }
    vector<int> f(M+1,0);
    for(int i=0;i<n;i++)f[v[i]]+=v[i];
    vector<int> dp(M+1,-1);
    cout<<mem(M,f,dp);
}