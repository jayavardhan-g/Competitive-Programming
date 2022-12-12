#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int  t;cin>>t;
    while(t--){
        int A=0;
        int n;cin>>n;
        vector<int> v(n);
        cin>>v[0]>>v[1];
        int a=1,b=1;
        int m=min(v[0],v[1]),M=max(v[0],v[1]);
        for(int i=2;i<n;i++){
            cin>>v[i];
            if(v[i]<m){m=v[i];a=1;}
            else if(v[i]==m){a++;}
            else if(v[i]>M){M=v[i];b=1;}
            else if(v[i]==M){b++;}
        }
        if(m==M)A=v.size()*(v.size()-1);
        else A=a*b*2;
 
        cout<<A<<endl;
    }
}