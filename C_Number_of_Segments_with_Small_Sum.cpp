#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int seg(int n){
    return (n*(n+1))/2;
}

int32_t main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    int ans=0;
    int sum=0;
    int j=0;
    for(int i=0;i<n;i++){
        sum+=v[i];

        while(sum>k){
            sum-=v[j];
            j++;
        }
        if(sum<=k)ans+=i-j+1;
    }
    cout<<ans;
}