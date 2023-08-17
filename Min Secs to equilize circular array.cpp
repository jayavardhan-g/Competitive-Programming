//https://leetcode.com/contest/biweekly-contest-110/problems/minimum-seconds-to-equalize-a-circular-array/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int minimumSeconds(vector<int>& v) {
    map<int,vector<int>> m;
    int s=0;
    for(int i=0;i<v.size();i++){
        m[v[i]].push_back(i);
    }
    if(s==v.size())return 0;
    if(s==1){
        return v.size()/2;
    }
    int r=INT_MAX;
    for(int l=0;l<v.size();l++){
        int k=v[l];
        int d= m[k][0] + v.size()-1 -m[k][m[k].size()-1];
        
        for(int i=1;i<m[k].size();i++){
            d=max(d, m[k][i]-m[k][i-1]-1);
        }
        r=min(r,d);
    }
    return (r+1)/2;
}
int32_t main(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    cout<<minimumSeconds(v);
}
