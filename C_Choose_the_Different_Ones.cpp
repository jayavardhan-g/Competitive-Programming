#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    map<int,int> a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>0 && x<=k)a[x]++;
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        if(x>0 && x<=k)b[x]++;
    }
    int aa=0,bb=0,ab=0;
    for(int i=1;i<=k;i++){
        // if(a[i] && b[i])ab++;
        if(a[i] && !b[i])aa++;
        if(!a[i] && b[i])bb++;
        if(a[i]|b[i])ab++;
    }
    if(aa>k/2 || bb>k/2 || ab<k )cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}