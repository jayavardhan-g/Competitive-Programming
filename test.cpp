#include<bits/stdc++.h>
using namespace std;
#define int long long

bool compare( pair<int,int> a, pair<int,int> b){
    if(a.second>b.second)return false;
    return true;
}

int32_t main(){
    vector<pair<int,int>> v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++)cout<<v[i].first<<' ';
}