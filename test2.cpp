#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl cout<<"\n";
int M=1e6+1;
int32_t main(){
    bool prime[M];
    memset(prime,1,sizeof(prime));
    for(int i=2;i*i<M;i+=1){
        if(prime[i]==0)continue;
        for(int j=i*i;j<M;j+=i)prime[j]=0;
    }

    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        if(prime[x]==1)cout<<"prime";
        else cout<<"No";
        endl;
    }

}