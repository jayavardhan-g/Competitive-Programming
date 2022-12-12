#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  pair<long double,long double> t[n];
  long double x=0, y=0, l;

    for(int i=0;i<n;i++){
        cin>>t[i].second;
        t[i].second/=100000;
        x+=t[i].second;
        cin>>l;
        l/=100000;
        t[i].first=t[i].second+l;
    }
    sort(t,t+n);
    int ans=0;
    int i=n-1;
    while(x>=y){
        y+=t[i].first;
        x-=t[i].second;
        i--;
        ans++;
    }
    cout<<ans;
}