#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(int i,vector<int>&v, vector<int>r,int target,set<vector<int>> &s){
    if(target==0){
        s.insert(r);
        return;
    }
    if(i==v.size()||target<0)return;
    solve(i+1,v,r,target,s);
    r.push_back(v[i]);
    solve(i+1,v,r,target-v[i],s);
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    set<vector<int>> s;
    solve(0,candidates,{},target,s);
    vector<vector<int>> r;
    for(auto i:s)r.push_back(i);
    return r;
}

int32_t main(){
    int n;cin>>n;
    vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
    int target;cin>>target;
    auto r=combinationSum2(v,target);
    for(auto i:r){
        for(auto j:i)cout<<j<<' ';
        cout<<endl;
    }
}
