#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int f[N];
int main(){
    bool primes[N];
    memset(primes,true,sizeof(primes));
    for(int i=2;i*i<N;i++){
        for(int j=i*i;j<N;j+=i)primes[j]=0;
    }
    primes[0]=0;primes[1]=0;
    
    int x=0;
    for(int i=0;i<5;i++)f[i]=0;
    for(int i=5;i<N;i+=2){
        if(primes[i]&&primes[i-2])x++;
        f[i]=x;f[i+1]=x;
    }
    cin>>x;
    cout<<f[x];
}