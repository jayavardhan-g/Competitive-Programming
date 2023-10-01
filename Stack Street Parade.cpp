//https://www.spoj.com/problems/STPAR/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(int n){
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    stack<int> s;
    int i=0;
    for(int x=1;x<=n;x++){
        if(!s.empty() && s.top()==x){
            s.pop();
            continue;
        }
        
        while( v[i]!=x && i<n){
            s.push(v[i]);
            i++;
        }

        if(i<n && x==v[i]){
            i++;
            continue;
        }
        
        if(i>=n){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    int z;cin>>z;
    if(z==0)return;
    else solve(z);
}
int32_t main(){
    int n;cin>>n;
    solve(n);
}