#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<0){
                ans=x;
                break;
            }

            ans=max(ans,x);
        }
        cout<<ans<<endl;
    }
}