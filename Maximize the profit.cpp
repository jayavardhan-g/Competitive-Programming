#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
    int rec(int i,int l,vector<vector<int>> &v,int n,vector<vector<int>> &dp){
        if(i==v.size())return 0;
        if(l==n)return 0;
        if(dp[i][l]!=-1)return dp[i][l];

        int p=0,np=0;
        if(v[i][0]>=l){
            p=v[i][2] + rec(i+1,v[i][1]+1,v,n,dp);
        }
        np=rec(i+1,l,v,n,dp);
        return dp[i][l]=max(p,np);
    }

    int maximizeTheProfit(int n, vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        // for(auto i:v)cout<<i[0]<<i[1]<<i[2]<<endl;
        vector<vector<int>> dp(v.size(),vector<int>(n,-1));
        return rec(0,0,v,n,dp);
    }

int32_t main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<vector<int>> v(n,vector<int>(3));
    for(int i=0;i<m;i++)cin>>v[i][0]>>v[i][1]>>v[i][2];
    cout<<maximizeTheProfit(n,v);
}