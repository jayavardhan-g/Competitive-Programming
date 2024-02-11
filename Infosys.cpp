#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int n;
unordered_map<string,int> dp;

int rec(int i,int p,vector<int>&v){
    string t = to_string(i)+"_"+to_string(p);
    if(p!=-1 && dp[t]!=0)return dp[t];
    if(i==n)return 0;
    int ans=0;
    if(p==-1||(v[i]>v[p]&& __gcd(v[i],v[p])!=1)){
        ans = 1+ rec(i+1,i,v);
    }
    ans= max(rec(i+1,p,v),ans);
    return dp[t]=ans;
}

int solve(int N,vector<int> v){
    n=N;
    return rec(0,-1,v);
}

int32_t main(){
    int N;cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++)cin>>v[i];
    cout<<solve(N,v);
}