#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]]=1;
    }
    int  ans=1,count=1;
    for(auto i:m){
        int x=i.first+1;
        if((i.first>0) && (m[x]>0)){
            count++;
        }
        else{
            ans=max(count,ans);
            count=1;
        }
    }
    cout<<ans;

}