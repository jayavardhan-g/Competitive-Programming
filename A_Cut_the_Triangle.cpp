#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x1==x2||x2==x3||x3==x1){
        if(y1==y2||y2==y3||y3==y1){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(y1==y2||y2==y3||y3==y1){
        if(x1==x2||x2==x3||x3==x1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;

    
}

int32_t main(){
    int t;cin>>t;
    while(t--){solve();}
}