#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int M=1e9 +7;

int sol(int q,int m){
    if(m==0)return 1;

    if(m%2==0){
        return sol((q%M * q%M)%M, m/2)%M;
    }else {
        return (q%M * sol((q%M * q%M)%M, m/2)%M)%M;
    }
}

int32_t main(){
    int q;cin>>q;
    cout<<(31%M * sol(7,M-2)%M)%M;
}