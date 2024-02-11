#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    string s;cin>>s;
    vector<int> order;
    vector<int> ch(26,0);
    for(int i=0;i<s.length();i++){
        int x=s[i];
        if(!ch[x])order.push_back(x);
        ch[x]++;
    }
    for(auto i:order){
        for(int j=0;j<ch[i];j++){
            char x=i;
            cout<<x;
        }
    }
    cout<<endl;
}