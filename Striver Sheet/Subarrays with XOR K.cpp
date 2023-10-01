#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int solve(vector<int> &v, int k) {
    map<int,int>m;
    m[0]=1;
    m[v[0]]=1;
    // cout<<v[0]<<' ';
    for(int i=1;i<v.size();i++){
        v[i] = v[i]^v[i-1];
        // cout<<v[i]<<' ';
        m[v[i]]++;   
    }
    // cout<<endl;
    vector<int> x;
    for(auto i:m){
        // cout<<i.first<<' '<<i.second<<endl;
        x.push_back(i.first);
    }

    int ans=0;
    // cout<<"pairs"<<endl;
    for(int i=0;i<x.size();i++){
        for(int j=i+1;j<x.size();j++){
            int z=x[i]^x[j];

            if(z==k){
                // cout<<x[i]<<' '<<x[j]<<endl;
                ans+= m[x[i]] * m[x[j]];
            }
        }
    }
    return ans;
}

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    int k;cin>>k;
    cout<<solve(v,k);
}