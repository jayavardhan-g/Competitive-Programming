#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        int x=s-r;
        int a[n];
        for(int i=0;i<n;i++)a[i]=x;
        x=a[0]*n;
        for(int i=0;i<n;i++){
            while(x>s&&a[i]>1){
                a[i]--;
                x--;
            }
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}