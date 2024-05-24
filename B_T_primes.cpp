#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    // freopen("op.txt","w",stdout);
    int n= 1e6+1;
    bool prime[n];
    memset(prime,1,sizeof(prime));
    prime[0]=0;prime[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]){
            for(int j=i*i;j<n;j+=i){
                prime[j]=0;
            }
        }
    }
    set<int>s;
    for(int i=2;i<n;i++){
        if(prime[i]){
            // cout<<i<<' ';
            s.insert(i*i);
        }
    }
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        if(s.count(x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}