#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void sol(int n,int k,int x){
    if(x!=1){
        cout<<"YES"<<endl<<n<<endl;
        for(int i=0;i<n;i++)cout<<1<<' ';
        cout<<endl;
    }else{
        if(n%2==0){
            if(k==1)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl<<n/2<<endl;
                for(int i=0;i<n;i+=2)cout<<2<<' ';
                cout<<endl;
            }
        }
        else{
            if(k==2||k==1)cout<<"NO"<<endl;
            else {
                cout<<"YES"<<endl<<(n-3)/2 +1<<endl;
                cout<<3<<' ';
                for(int i=0;i<n-3;i+=2)cout<<2<<' ';
                cout<<endl;
            }
        }
    }
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k,x;cin>>n>>k>>x;
        sol(n,k,x);
    }
}