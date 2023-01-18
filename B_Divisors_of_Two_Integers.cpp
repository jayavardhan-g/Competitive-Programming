#include<bits/stdc++.h>
using namespace std;
#define long long
int32_t main(){
    int n;cin>>n;
    vector<int> v;
    int x;
    int y=INT_MIN,z=INT_MIN;
    set<int> s;
    while(n--){
        cin>>x;
        if(x>y)y=x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(s.find(v[i])==s.end()){
            if(y%v[i]==0){
                s.insert(v[i]);
                v[i]=0;
            }
            
        }
    }
    
    for(int i=0;i<v.size();i++)if(v[i]>z)z=v[i];
    cout<<y<<" "<<z;

}