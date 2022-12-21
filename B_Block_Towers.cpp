#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v;
    int x;cin>>x; 
    v.push_back(x);
    for(int i=1;i<n;i++){
        cin>>x;
        if(x>v[0])v.push_back(x);
    }
    sort(v.begin(),v.end());
    x=v[v.size()-1]+v[v.size()-2];
    if(x%2==0)v[0]=x/2;
    else v[0]=x/2 +1;
    cout<<v[0]<<endl;

}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}