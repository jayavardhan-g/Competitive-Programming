#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        int x=1;
        while(x<=(1LL<<32) && k){
            x*=2;
            k--;
        }
        if(x<=n){
            cout<<x;
        }else cout<<n+1;
        cout<<endl;

    }
}