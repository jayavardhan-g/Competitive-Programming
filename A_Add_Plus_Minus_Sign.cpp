#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string q;
        cin>>q;
        int a[n];
        for(int i=0;i<n;i++){
            if(q[i]==0)a[i]=0;
            if(q[i]==1)a[i]=1;
        }

        string s;
        int x=a[0];
        for(int i=1;i<n;i++){
            if(x>0){
                s+='-';
                x+= a[i]*(-1);
            }
            else {
                s+='+';
                x+=a[i];
            }
        }
        cout<<s<<endl;
    }
}