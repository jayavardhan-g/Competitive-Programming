#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
vector<int> pal;

void solve(){
    int n;cin>>n;
    int v[n];for(int i=0;i<n;i++)cin>>v[i];
    int z= v[0];
    int sum=0;
    for(int i=1;i<n;i++)sum+= abs(v[i]-v[0]);

    int lo=0,hi=pal.size()-1;
    int operations=-1;
    while(lo<=hi){
        int mid= lo+ (hi-lo)/2;
        
    }    
}

int32_t main(){
    int x= 0;
    while(x!=-1){
        pal.push_back(x);
        cin>>x;
    }
    int  t;cin>>t;
    while(t--)solve();
}