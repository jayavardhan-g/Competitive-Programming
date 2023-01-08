#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod(int  x){
    if(x>0)return x;
    return -x;
}

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    sort(v.begin(),v.end());
    int y=0;
    int x=v[n-1];
    int i=n-2;
    while(i>=0){
        while(x>y&&i>=0){
            y+=v[i];
            i--;
        }
        
        while(y>x&&i>=0){
            x+=v[i];
            i--;
        }
        
    }

    

    cout<<mod(x-y);

}