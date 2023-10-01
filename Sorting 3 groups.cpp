#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
    int rec(int l,int n,vector<int> &v,vector<vector<int>> &dp){
        if(n==v.size())return 0;
        if(dp[l][n]!=-1)return dp[l][n];

        int k=v[n];
        int x=1e8;

        for(int i=l;i<4;i++){
            if(i==k)x=min(x, rec(i,n+1,v,dp));
            else x=min(x, 1+ rec(i,n+1,v,dp));
        }

        return dp[l][n]=x;
    }

    int minimumOperations(vector<int>& v) {
        vector<vector<int>> dp(4,vector<int>(v.size(),-1));
        return rec(1,0,v,dp);
    }

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<minimumOperations(v);
}