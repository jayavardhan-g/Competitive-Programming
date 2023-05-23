#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,t2;
        cin>>n>>t2;
        string s;
        cin>>s;
        vector<int> v(n);
        if(s[0]=='+')v[0]=1;
        else v[0]=-1;

        for(int i=1;i<n;i++){
            if(s[i]=='+')v[i]=v[i]+v[i-1]+1;
            else v[i]=v[i]+v[i-1]-1;
        }

    }
    
}