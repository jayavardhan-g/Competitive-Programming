#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e6+1;
int32_t main(){
    vector<bool>p(M,1);
    p[0]=0;
    p[1]=0;
    map<int,bool> m;
    for(int i=0;i*i<M;i++){
        if(p[i]==1){
            for(int j=i*i;j<M;j+=i){
                p[j]=0;
            }
        }
    }
    for(int i=0;i<M;i++){
        if(p[i]){
            m[i*i]=1;
        }
    }
    int x;cin>>x;
    while(x--){
        int y;cin>>y;
        if(m.find(y)==m.end())cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }

}