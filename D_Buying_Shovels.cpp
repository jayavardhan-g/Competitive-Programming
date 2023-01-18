#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        vector<int> v;
        int n,k;
        cin>>n>>k;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                v.push_back(n/i);
            }
        }

        int ans=1;
        for(int i=0;i<v.size();i++){
            if(v[i]<=k){
                ans=v[i]>ans?v[i]:ans;
            }
        }
        ans=n/ans;
        cout<<ans<<endl;

    }
    
}