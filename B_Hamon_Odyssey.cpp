#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    int ans=0;    
    int temp=v[0];


    for(int i=0;i<n;i++){
        temp=temp&v[i];

        if(temp==0){
            ans++;
            if(i<n-1)temp=v[i+1];
        }
    }

    if(ans==0 && temp>0){cout<<1<<endl;return;}
    if(ans>0 )cout<<ans<<endl;return;

}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}