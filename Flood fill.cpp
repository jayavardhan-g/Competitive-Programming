#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

    void rec(int i,int j,vector<vector<int>> &v,int n){
        int k=v[i][j];
        v[i][j]=-1*n;

        if(i>0){
            if(v[i-1][j]==k)rec(i-1,j,v,n);
        }

        if(i<v.size()-1){
            if(v[i+1][j]==k)rec(i+1,j,v,n);
        }

        if(j>0){
            if(v[i][j-1]==k)rec(i,j-1,v,n);
        }

        if(j<v[0].size()-1){
            if(v[i][j+1]==k)rec(i,j+1,v,n);
        }
        v[i][j]=n;

        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int n) {
        rec(sr,sc,v,n);
        return v;
    }

int32_t main(){
    int n;cin>>n;
    int m;cin>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>v[i][j];
    int sr,sc,c;cin>>sr>>sc>>c;

    // for(auto i:v){
    //     for(auto j:i)cout<<j<<' ';
    //     cout<<endl;
    // }
    v= floodFill(v,sr,sc,c);
    for(auto i:v){
        for(auto j:i)cout<<j<<' ';
        cout<<endl;
    }
}