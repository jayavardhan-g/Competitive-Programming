//https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// bool sol(int i,int sum,bool r,vector<int> &v,vector<vector<int>> &dp){
//     if(r==true)return true;
//     if(sum==0)return true;
//     if(sum<0)return false;
//     if(i<0)return false;
//     if(dp[i][sum]==1)return true;
//     if(dp[i][sum]==0)return false;
    
//     bool p=sol(i-1,sum-v[i],r,v,dp);
//     bool np=sol(i-1,sum,r,v,dp);

//     if(p||np)return dp[i][sum]=1;
//     else return dp[i][sum]=0;
// }

bool check(vector<int>&ar,int idx,int sum,vector<vector<bool>>&dp){
    if(sum==0) return true;
    if(sum<0) return false;
    if(idx<0) return false;
    if(dp[idx][sum]==false){return false;}
    
    bool p=check(ar,idx-1,sum-ar[idx],dp);
    bool np=check(ar,idx-1,sum,dp);
    
    dp[idx][sum]=(p||np);
                
    return dp[idx][sum];
}
int32_t main(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    int s;cin>>s;
    // vector<vector<int>> dp(n,vector<int>(s+1,-1));
    // cout<<sol(n-1,s,0,v,dp);
    vector<vector<bool>>dp(n+1,vector<bool>(s+1,true));
    cout<<check(v,n-1,s,dp);
}