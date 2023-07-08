#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int sol(int n, int dp[500]){
    if(dp[n]==2)dp[n]=0;
    if(dp[n]!=-1)return dp[n];
    
    int k=n;
    int next=0;
    while(k){
        int x=k%10;
        next+= x*x;
        k/=10;
    }
    if(next==1)dp[n]=1;
    else {
        dp[n]=2;
        dp[n]=sol(next,dp);
    }
    return dp[n];
}
int nextHappy(int N){
    int dp[500];
    memset(dp,-1,sizeof(dp));
    int ans=-1;
    for(int i=N+1;i<1e5;i++){
        if(sol(i,dp)==1)return i;
    }
    return 0;
}

int32_t main(){
    int n;cin>>n;
    cout<<nextHappy(n);
}