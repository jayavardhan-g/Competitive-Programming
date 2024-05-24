#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int a,h,n;
    cin>>a>>h>>n;
    vector<pair<int,int>> at(n);
    for(int i=0;i<n;i++){
        cin>>at[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>at[i].second;
    }
    sort(at.begin(),at.end());
    int i;
    for(i=0;i<n;i++){
        int x = at[i].second/a;
        if(at[i].second%a)x++;
        
        if(h> at[i].first*(x-1) ){
            h -= at[i].first*x;
        }else{
            break;
        }
    }

    if(i==n)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--)solve();
}