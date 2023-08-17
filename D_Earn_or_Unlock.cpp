#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

// int rec(int i,int j,vector<int> &v, vector<vector<int>> &dp){
//     if(i==v.size() || i>j)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
    
//     int p=0,np=0;
//     p=v[i]+rec(i+1,j,v,dp);

//     if(v[i]+j>v.size()-1)j=v.size()-1;
//     else j=v[i]+j;
//     np=rec(i+1,j,v,dp);
    
//     return dp[i][j]=max(p,np);
// }

int tabulation(vector<int> &v){
    int n=v.size();
    vector<vector<int>> dp(n+1,vector<int>(n,0));
    
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i>j){
                dp[i][j]=0;
                continue;
            }

            int p=0,np=0;
            p=v[i]+dp[i+1][j];

            int k;
            if(v[i]+j>v.size()-1)k=v.size()-1;
            else k=v[i]+j;
            np=dp[i+1][k];
            
            dp[i][j]=max(p,np);            
        }
    }
    return dp[0][0];
}

int rec(int i,int j,vector<int> &v, vector<vector<int>> &dp){
    if(i==v.size() || i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    
    int p=0,np=0;
    // p=v[i]+rec(i+1,j,v,dp);

    // if(v[i]+j>v.size()-1)j=v.size()-1;
    // else j=v[i]+j;
    // np=rec(i+1,j,v,dp);
    
    int  ans=0;
    int  curr=0;
    for(i;i<=j;i++){
        int k;
        if(v[i]+j>v.size()-1)k=v.size()-1;
        else k=v[i]+j;
        ans=max(ans,max(curr+v[i]+rec(i+1,j,v,dp),curr+rec(i+1,k,v,dp)));
        curr+=v[i];
    }

    return dp[i][j]=ans;
}

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    vector<vector<int>> dp(n,vector<int> (n,-1));
    cout<<rec(0,0,v,dp);
}