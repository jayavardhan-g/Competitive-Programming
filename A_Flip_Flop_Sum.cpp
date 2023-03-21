#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int x=0;
        cin>>a[0];
        int sum=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(x!=3){
                if(a[i]==-1&&a[i-1]==-1)x=2;
                if(a[i]==1&&a[i-1]==1)x=1;
            }
            sum+=a[i];
        }
        if(x==0)cout<<sum;
        if(x==1)cout<<(sum-4);
        if(x==2)cout<<(sum+4);
        cout<<endl;
    }
}