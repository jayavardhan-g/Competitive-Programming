#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
        vector<int> temp;
        for(int i=1;i<n;i++){
            temp.push_back(abs(v[i]-v[i-1]));
        }
        cout<<endl;
        sort(temp.begin(),temp.end());
        for(int i=1;i<k;i++){
            temp.pop_back();
        }
        int ans=0;
        for(auto i:temp)ans+=i;
        cout<<ans<<endl;
    }
}