#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ans=0,no=0;
        int x,y=1;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<0){
                ans+=-x;
                if(y>0)no++;
            }
            else ans+=x;
            if(x!=0)y=x;
        }
        cout<<ans<<' '<<no<<endl;
    }
}