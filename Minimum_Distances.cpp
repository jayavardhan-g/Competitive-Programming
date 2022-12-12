#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    int x=n+1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map <int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(v[i])==m.end()){
            m[v[i]]=i;
        }else{
            x=min(x,i-m[v[i]]);
            m[v[i]]=i;
        }
    }
    if(x==n+1)cout<<-1;
    else cout<<x;
}