#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int dfs(int node, vector<int>&edges,vector<bool> &vis,vector<int> &cvn){
    if(vis[node])return 0;
    
    vis[node]=1;
    int r= 1+ dfs(edges[node],edges,vis,cvn);
    return r;
}

vector<int> countVisitedNodes(vector<int>& edges) {
    int n=edges.size();
    vector<int> cvn(n,0);
    for(int i=0;i<n;i++){
        vector<bool> vis(n,0);
        cvn[i]=dfs(i,edges,vis,cvn);
    }
    return cvn;
}

int32_t main(){
    int n;cin>>n;
    vector<int> edges(n);for(int i=0;i<n;i++)cin>>edges[i];
    vector<int> r=countVisitedNodes(edges);
    for(auto i:r)cout<<i<<' ';
}