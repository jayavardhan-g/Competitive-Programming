#include<bits/stdc++.h>
#define int long long
using namespace std;
int part(int *a,int l,int x1,int x, int x2,int ans){
    int y=0;
    if(a[0]==0)return 0;
    for(int i=0;i<l;i++){
        if(i==x1||i==x2||i==x)continue;
        y=max(part(a,l,i-1,i,i+1,ans),y);
    }
    return y+ans;

}
int deleteAndEarn(vector<int>& v) {
    int a[10001]={0};
    for(int i=0;i<v.size();i++){
        a[v[i]]+=v[i];
    }
    int ans=0,i=0;
    while(i<10001){
        int l=0,x=i;
        while(a[i]>0&&i<10001){l++;i++;}
        if(l>1)ans+=part(a+x,l,x-1,x+1,x,0);
        else ans+=a[x];
        i++;
    }
    return ans;
}
int32_t main(){
    int n;cin>>n;
    vector<int> v;
    int x;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    cout<<deleteAndEarn(v);
}