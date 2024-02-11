#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    string s;cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    int l=0;
    bool x=0;
    for(auto i:m){
        if((i.second)%2==0){
            l+=i.second;
        }else{
            x=1;
            l+=i.second-1;
        }
    }
    if(x)l++;
    cout<<l<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}