#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        set<int>s;
        int n;cin>>n;
        vector<int> v;
        int a[n][n];
        int ans=1;
        for(int i=0;ans<=n*n;i++){
            v.push_back(ans);
            s.insert(ans);
            ans+=i;            
        }
        
        

    }
}
