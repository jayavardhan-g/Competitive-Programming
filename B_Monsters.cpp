#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

bool compare(pair<int,int> a,pair<int,int> b){
    if(a.first>b.first) return true;
    else if(a.first==b.first){
        if(a.second<b.second)return true;
        else return false;
    }else return false;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>> v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%k==0)cout<<i+1<<' ';
        else{
            v.push_back(make_pair(x%k,i+1));
        }
    }
    sort(v.begin(),v.end(),compare);

    for(auto i:v){
        cout<<i.second<<' ';
    }

    cout<<endl;

}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}