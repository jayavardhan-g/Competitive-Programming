#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n";
#define int long long

int sol(int i,int k,vector<int> v,vector<int> &dp, int n){
    if(i==n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    
    int l=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j>=n)break;
        l=min(l, abs(v[i]-v[i+j])+sol(i+j,k,v,dp,n));
    }
    return dp[i]=l;
}

// int sol(int i,int k, vector<int> v, vector<int> &dp){
//     if(i==0)return 0;
//     if(dp[i]!=-1)return dp[i];

//     int l=INT_MAX;
//     for(int j=1;j<=k;j++){
//         if(i-j<0)break;
//         l=min(l, sol(i-j,k,v,dp)+abs(v[i]-v[i-j]));
//     }
//     return dp[i]=l;
// }

// tabulation

// int sol(int i,int k, vector<int> v,vector<int> &dp, int n){
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=k;j++){
//             if(i+j>n-1)break;
//             if(dp[i+j]==-1)dp[i+j]=dp[i]+abs(v[i+j]-v[i]);
//             else dp[i+j]=min(dp[i+j],dp[i]+abs(v[i+j]-v[i]));
//         }
//     }
//     return dp[n-1];
// }

int32_t main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> dp(n,-1);
    cout<<sol(0,k,v,dp,n);
}