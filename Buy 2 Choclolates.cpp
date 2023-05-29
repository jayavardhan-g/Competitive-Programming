//https://leetcode.com/contest/biweekly-contest-105/problems/buy-two-chocolates/
#include<bits/stdc++.h>
using namespace std;
#define int long long

int buyChoco(vector<int>& v, int m) {
    int m1=min(v[0],v[1]),m2=max(v[0],v[1]);
    for(int i=2;i<v.size();i++){
        if(v[i]<=m1 && v[i]<m2){
            m2=m1;
            m1=v[i];
        }else if(v[i]>m1 && v[i]<m2){
            m2=v[i];
        }else ;
    }
    if((m1+m2)>m)return m;
    else return (m-m1-m2);
    
}
long long maxStrength(vector<int>& v) {
        vector<int> n;
        long long ans=1;
        int M=INT_MIN;
        for(int i=0;i<v.size();i++){
            M=max(v[i],M);
            if(v[i]>0)ans*=v[i];
            else if(v[i]==0);
            else{
                n.push_back(v[i]);
            }
        }
        sort(n.begin(),n.end());
        int k=0;

        if(n.size()<=1 && M==0)return 0;
        if(n.size()==1 && M<0)return M;
        if(n.size()%2==0){
            k=n.size();
        }
        else{
            k=n.size()-1;
        }
        for(int i=0;i<k;i++){
            ans*=n[i];
        }
        return ans;
    }

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    // int m;cin>>m;
    // cout<<buyChoco(v,m);
    cout<<maxStrength(v);
}