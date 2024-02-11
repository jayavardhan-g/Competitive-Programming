#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void change_direction(pair<int,int> &p,char c){
    if(p.first==0 && p.second==1){
        if(c=='R'){
            p={1,0};
        }else{
            p={-1,0};
        }
    }else if(p.first==1 && p.second==0){
        if(c=='R'){
            p={0,-1};
        }else{
            p={0,1};
        }
    }else if(p.first==0 && p.second==-1){
        if(c=='R'){
            p={-1,0};
        }else{
            p={1,0};
        }
    }else{
        if(c=='R'){
            p={0,1};
        }else{
            p={0,-1};
        }
    }
}

int32_t main(){
    // int n,m;cin>>n>>m;
    // vector<int> f(m);
    // vector<int> t(m);
    // vector<int> w(m);
    // for(int i=0;i<m;i++)cin>>f[i];
    // for(int i=0;i<m;i++)cin>>t[i];
    // for(int i=0;i<m;i++)cin>>w[i];

    string s;cin>>s;
    pair<int,int> inipos={0,0};
    pair<int,int> pos={0,0};
    pair<int,int> inidir={0,1};
    pair<int,int> dir={0,1};
    bool x=0;
    for(int j=0;j<4;j++){
    for(int i=0;i<s.length();i++){
        if(s[i]=='G'){
            pos = {pos.first+ dir.first, pos.second+dir.second};
        }else{
            change_direction(dir,s[i]);
        }
    }
        // if(inipos== pos && inidir==dir)x=1;
    }
        if(inipos== pos && inidir==dir)x=1;

    if(x)cout<<"YES";
    else cout<<"NO";
}