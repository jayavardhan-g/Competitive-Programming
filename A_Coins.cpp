#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
    int n,k,y;
    cin>>n>>k;
    if(k==1){cout<<"YES"<<endl;continue;}
    if(n%2==0){cout<<"YES"<<endl;continue;}
    if(k%2==0)cout<<"NO";
    else if(k!=n && (k+2)>n)cout<<"NO";
    else cout<<"YES";
    cout<<endl;
    }
}