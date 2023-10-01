#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n,a;
    cin>>n>>a;
    int z;cin>>z;
    z=a;
    string s;cin>>s;
    if(a>=n ){
        cout<<"YES"<<endl;
        return;
    }
    int p=0;
    for(int i=0;i<s.size();i++){
        int t= s[i]=='+'?1:-1;
        if(t==1)p++;
        a+=t;
        if(a>=n){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(p>= (n-z)){
        cout<<"MAYBE"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}