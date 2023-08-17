#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int b,c,h;cin>>b>>c>>h;
        int x= min(b-1,c+h)*2 +1;
        cout<<x<<endl;
    }
}