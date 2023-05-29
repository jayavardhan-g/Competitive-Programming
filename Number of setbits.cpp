//Count of set bits from 1 to N
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    int ans=0;
    int i=0;
    for(i=1;i<64;i++){
        if((1LL<<i)>n)break;
        int x=1LL<<(i+1);
        int y=1LL<<i;
        int k=n/x;
        int j=(n-k*x)-(y-1);
        if(j<0)j=0;
        ans+= y*k +j;
    }

    ans+= (n+1)/2;
    cout<<ans;
}