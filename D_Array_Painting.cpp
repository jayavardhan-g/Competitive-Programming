#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int solve(vector<int> &v){
    set<int> t,o,z;
    for(int i=0;i<v.size();i++){
        switch (v[i])
        {
        case 2:
            t.insert(i);
            break;
        
        case 1:
            t.insert(i);
            break;
        
        default:
            t.insert(i);
            break;
        }
    }
    
}

int32_t main(){
    int n;cin>>n;
    vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
}