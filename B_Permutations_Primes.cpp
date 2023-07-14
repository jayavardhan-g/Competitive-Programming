#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>> v(n+1);
        for(int i=0;i<n+1;i++){
            v[i].second=i;
            v[i].first=1;
        }
        for(int i=2;i*i<n;i++){
            if(v[i].second==0)continue;
            for(int j=i*i;j<n+1;j+=i){
                v[j].first=0;
            }
        }
        sort(v.begin(),v.end());
        vector<int> ans(n);
        int i=0,j=n-1;

        while(i<=j){
            ans[i]=
        }
        
        int i=0;

    }
}