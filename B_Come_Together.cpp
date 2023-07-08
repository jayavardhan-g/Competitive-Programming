#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int v=1;
        if((y2<y1 && y3<y1) || (y3>y1 && y2>y1))v+=min(abs(y2-y1),abs(y3-y1));
        
        int h=0;
        if((x2<x1 && x3<x1)|| (x3>x1 && x2>x1)) h+=min(abs(x2-x1),abs(x3-x1));
        cout<<v+h<<endl;

    }
}