#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    pair<int,int> a[n];
    int x=0,y=0;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        x+=a[i].first;
    }
    for(int i=0;i<n;i++){
        a[i].first=a[i].first*2+a[i].second;
    }
    sort(a,a+n);
    int i=n-1;
    int ans=0;
    while(x>=y){
        y+=a[i].first;
        i--;
        ans++;
        //Hello World
    }
    cout<<ans;
}