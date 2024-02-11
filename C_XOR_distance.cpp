#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    unsigned int a,b,r;
    cin>>a>>b>>r;
    bool ab[65],bb[65],rb[65];
    memset(ab,0,sizeof(ab));
    memset(bb,0,sizeof(bb));
    for(int i=0;i<64;i++){
        if(a&(1LL<<i))ab[i]=1;
        if(b&(1LL<<i))bb[i]=1;
        // if(a&(1LL<<i))ab[i]=1;
    }
    int ans=0;
    for(int i=0;i<64;i++){
        if(ab[i]){
            if(bb[i]){
                ans = ans|(1LL<<i);
            }
        }else{
            if(bb[i]){
                ans = ans|(1LL<<i);
            }
        }
    }
    cout<<ans<<endl;

}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}