#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    string pi="314159265358979323846264338327";
    while(t--){
        string s;cin>>s;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==pi[i])ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}