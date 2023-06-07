#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n";
#define int long long

int32_t main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s(n,0);
        cin>>s;
        for(int i=0;i<n;i++){
            char c=s[i];
            i++;
            while(s[i]!=c)i++;
            cout<<c;
        }
        endl;
    }
    
}