#include<bits/stdc++.h>
using namespace std;
#define int long long
//t =1e4
//n =2 * 1e5
// sumof(n)<2*1e5

const int m=2*(1e5)+1;
int d[m];

void solve(){
    int ans=0;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    a[1]=a[0]^a[1];
    for(int i=2;i<n;i++){
        a[i]=a[i]^a[i-1];
    }

    for(int i=0;i<n;i++)if(d[a[i]]%2==0)ans++;

    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            int x=a[j]^a[i-1];
            if(d[x]%2==0)ans++;
        }
    }

    cout<<ans<<endl;
}

int32_t main(){
    for(int i=2;i<m;i++)d[i]=2;
    d[1]=1;
    d[0]=1;
    for(int i=2;i<m;i++){
        for(int j=i*2;j<m;j+=i)d[j]++;
    }
    // for(int i=0;i<7;i++)cout<<d[i]<<endl;
    int t;cin>>t;
    while(t--){
        solve();
    }
}