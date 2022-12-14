#include<bits/stdc++.h>
using namespace std;
#define int long long
int recursive(int x,int y){
    if(y==1)return x;
    if(y%2==0){
        x=power(x*x,y/2);
    }else{
        x=x*power(x*x,y/2);
    }
    return x;
}
int32_t main(){
    int l;cin>>l;
    int x;cin>>x;
    cout<<recursive(l,x);
}