#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int f[N];
int main(){
    bool primes[N];
    memset(primes,false,sizeof(primes[N]));
    for(int i=3;i<N;i+=2)primes[i]=1;
    for(int i=3;i*i<N;i+=2){
        if(primes[i]==0)continue;
        for(int j=i*i;j<N;j+=i)primes[j]=0;
    }

    memset(f,0,sizeof(f[N]));
    int n=0;
    for(int i=5;i<N;i+=2){
        if(primes[i-2]==1 && primes[i]==1){n++;}
        f[i]=n;f[i+1]=n;
    }

    int t;cin>>t;
    while(t--){
        int i;cin>>i;
        cout<<f[i]<<endl;
    }
    

}