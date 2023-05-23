#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        set <string> x;
        for(int i=0;i<n-1;i++){
            string temp=s.substr(i,2);
            x.insert(temp);
        }
        cout<<x.size()<<endl;
    }
}