#include<bits/stdc++.h>
using namespace std;
#define int long long
//t<4000
//n<50
//a[i]<1e6
//product of a[i]<1e12
void solve(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)continue;
            int x=a[i]+a[j];
            int y=a[i]*a[j]+1;
            if(y>x){
                a[i]=a[i]*a[j];
                a[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)sum+=a[i];
    cout<<sum*2022<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        solve(a,n);
    }
}