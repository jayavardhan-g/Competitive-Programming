#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;

    if(n==1){
        cout<<1<<endl;
        cout<<1;
        return 0;
    }
    if(n==2){
        cout<<1<<endl;
        cout<<1<<" "<<1;
        return 0;
    }

    bool prime[n+2];
    memset(prime,1,sizeof(prime));
    for(int i=2;i*i<=n+2;i+=1){
        if(prime[i]==0)continue;
        for(int j=i*i;j<=n+2;j+=i){
            prime[j]=0;
        }
    }
    cout<<2<<endl;
    for(int i=1;i<n+1;i++){
        if(prime[i+1]==1)cout<<1<<" ";
        else cout<<2<<" ";
    }

}