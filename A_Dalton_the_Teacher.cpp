#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int d=0;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==i+1){
                d++;
            }
        }
        cout<< (d%2 + d/2)<<endl;
    }
}