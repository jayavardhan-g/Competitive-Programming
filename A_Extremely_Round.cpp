#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e8;
int a[M]={0};
int32_t main(){
    int t;cin>>t;
    for(int i=1;i<10;i++){
        while(i<M){
            a[i]=1;
            i*=10;
        }
    }
    for(int i=1;i<M;i++){
        a[i]=a[i]+a[i-1];
    }
    while(t--){
        int n;cin>>n;
        cout<<a[n];
    }
}