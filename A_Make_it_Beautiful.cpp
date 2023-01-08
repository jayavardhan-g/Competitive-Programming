#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(v[0]==v[n-1]){
            cout<<"NO"<<endl;
            continue;
        }else{
            cout<<"YES"<<endl;
            cout<<v[n-1]<<" "<<v[0]<<" ";
            for(int i=n-2;i>0;i--)cout<<v[i]<<" ";
            cout<<endl;
        }

    }
}