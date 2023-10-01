#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int m1,m2, M1,M2,a,b;
    cin>>m1;
    a=m1;
    M1=m1;
    for(int i=1;i<n;i++){
        int x;cin>>x;
        a+=x;
        M1=max(x,M1);
        m1=min(x,m1);
    }
    cin>>m2;
    b=m2;
    M2=m2;
    for(int i=1;i<m;i++){
        int x;cin>>x;
        b+=x;
        M2=max(x,M2);
        m2=min(x,m2);
    }
    // cout<<m1<<' ';
    // cout<<M1<<' ';
    // cout<<m2<<' ';
    // cout<<M2<<' ';
    // cout<<endl;
    int o=a,e=a;
    //i=1;
    if(M2>m1){
        a+=M2-m1;
        b+=m1-M2;
        if(M2>M1)M1=M2;
        if(m1<m2)m2=m1;
        o=a;
    }
    //i=2;
    if(M1>m2){
        b+=M1-m2;
        a+=m2-M1;
        e=a;
    }
    
    if(k%2==0)cout<<e<<endl;
    else cout<<o<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}