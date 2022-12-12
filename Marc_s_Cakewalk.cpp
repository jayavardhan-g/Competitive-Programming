#include<bits/stdc++.h>
using namespace std;
#define int long long
int pow(int a,int b){
    int ans=1;
    while(b>0){
        ans*=a;
    }
    return ans;
}
int32_t main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=pow(2,i)*v[n-1-i];
    }
    cout<<ans;

}