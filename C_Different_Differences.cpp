#include<bits/stdc++.h>
using namespace  std;
#define int long long
#define endl cout<<"\n"
void solve(){
    int k;cin>>k;
    int n;cin>>n;
    int d=0,c=1,x=1,b=k-1,be=k-x;
    do{
        cout<<x<<' ';
        d++;c++;b--;
        x+=d;
    }while(c<=k&&x<=n&&be<=k-1);
    x-=d;
    while(c<=k&&x<=n){
        x++;c++;
        cout<<x<<' ';   
    }
    endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}