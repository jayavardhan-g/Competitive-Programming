#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(vector<int> &a1,vector<int> &a2){
    // vector<pair<int,int>> swaps;
    int n=a1.size();
    vector<pair<int,int>> v;
    vector<pair<int,int>> v2;
    for(int i=0;i<n;i++){
        v.push_back({a1[i],i});
    }
    v2=v;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v2[j].first>v2[j+1].first){
                swap(v2[j],v2[j+1]);
            }
        }
    }
    sort(v.begin(),v.end());
    
    for(auto i:v)cout<<i.first<<','<<i.second<<' ';cout<<endl;
    for(auto i:v2)cout<<i.first<<','<<i.second<<' ';cout<<endl;
    
    for(int i=0;i<n;i++){
        cout<<a2[v[i].second]<<' ';
    }
}
int32_t main(){
    int n;
    cin>>n;
    vector<int> a1(n);
    vector<int> a2(n);
    for(int i=0;i<n;i++)cin>>a1[i];
    for(int i=0;i<n;i++)cin>>a2[i];
    
    solve(a1,a2);
}