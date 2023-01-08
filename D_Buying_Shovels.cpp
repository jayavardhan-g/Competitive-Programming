#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+1;
int a[M];
int32_t main(){
    memset(a,0,sizeof(a));
    for(int i=2;i<M;i++){
        for(int j=i;j<M;j+=i)a[j]=i;
    }
    a[1]=0;a[0]=0;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        
    }
    
}