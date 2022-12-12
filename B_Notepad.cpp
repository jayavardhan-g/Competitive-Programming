#include<bits/stdc++.h>
using namespace std;
//#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int x=0;
        if(n==2||n==1||n==3){cout<<"NO"<<endl;continue;}
        for(int i=2;i<n-1;i++){ 
            string a=s.substr(0,i);
            string b=s.substr(i,2);
            x=a.find(b);
            if(x!=-1)break;

        }
        if(x!=-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}