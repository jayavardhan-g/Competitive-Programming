//https://leetcode.com/contest/biweekly-contest-107/problems/decremental-string-concatenation/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int mem(int i,vector<string> &v, char f,char l,vector<vector<vector<int>>> &dp){
    if(i==v.size())return 0;
    if(dp[i][f-'a'][l-'a']!=-1)return dp[i][f-'a'][l-'a'];

    int  ws,sw;
    if(f==v[i][v[i].length()-1]){
        ws=v[i].length()-1 + mem(i+1,v,v[i][0],l,dp);
    }else ws= v[i].length()+mem(i+1,v,v[i][0],l,dp);

    if(l==v[i][0]){
        sw=v[i].length()-1 + mem(i+1,v,f,v[i][v[i].length()-1],dp);
    }else sw=v[i].length() + mem(i+1,v,f,v[i][v[i].length()-1],dp);

    return dp[i][f-'a'][l-'a']=min(ws,sw);

}

int sol(vector<string> &v){
    char f=v[0][0];
    char l=v[0][v[0].length()-1];
    vector<vector<vector<int>>> dp(v.size(),vector<vector<int>>(26,vector<int> (26,-1)));
    return v[0].size() + mem(1,v,f,l,dp);
}

int32_t main(){
    int n;cin>>n;
    vector<string> v(n);for(int i=0;i<n;i++)cin>>v[i];
    cout<<sol(v);
}