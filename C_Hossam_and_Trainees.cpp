#include<bits/stdc++.h>
using namespace  std;
#define int long long

int32_t main(){
    int M=100001;
    vector<vector<int>> v(M);
    for(int i=2;i<M;i++){
        for(int j=i*i;j<M;j+=i){
            if(j%i==0)v[j].push_back(i);
        }
    }


    int t;cin>>t;
    while (t--){

    }
}