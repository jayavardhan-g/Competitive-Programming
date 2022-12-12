#include<bits/stdc++.h>
using namespace std;

int find(vector <int>v){
    int n=v.size(); int ans=-1;
    for(int i=1;i<n;i++){
        v[i]=v[i-1]+v[i];
    }
    int x,y;
    for(int i=0;i<n;i++){
        if((i-1)<0)x=0;
        else x=v[i-1];
        y=v[n-1]-v[i];

        if(x==y){
            ans=i;
            break;
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int>v;int x;
    for(int i=0;i<n;i++){
        cin>>x;v.push_back(x);
    }
    int ans=find(v);
    cout<<ans;
}