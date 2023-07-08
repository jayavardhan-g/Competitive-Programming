//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int knapsack(vector<int> &w,vector<int> &v,int W,int i,vector<vector<int>> &dp){
    if(W<0)return -1e8;
    if(i<0)return 0;
    if(W==0)return 0;
    if(dp[i][W]!=-1)return dp[i][W];

    int p=v[i]+knapsack(w,v,W-w[i],i-1,dp);
    int np=knapsack(w,v,W,i-1,dp);

    return dp[i][W]=max(p,np);
}
int tb(vector<int> &w,vector<int> &v,int n,int W){
        vector<vector<int>> dp(n,vector<int>(W+1,0));
        
        for(int i=0;i<n;i++)dp[i][0]=0;
        for(int i=0;i<W+1;i++)dp[0][i]=W>=w[0]?v[0]:0;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<W+1;j++){
                int p=-1,np;
                np=dp[i-1][W];
                if(W-w[i]>=0)p=v[i]+dp[i-1][W-w[i]];
                
                dp[i][W]=max(p,np);
            }
        }

        return dp[n-1][W];
    }
int32_t main(){
    int n;cin>>n;
    vector<int> w(n);for(int i=0;i<n;i++)cin>>w[i];
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    int W;cin>>W;
    vector<vector<int>> dp(n,vector<int>(W+1,-1));
    // cout<<knapsack(w,v,W,n-1,dp);
    cout<<tb(w,v,n,W);
}