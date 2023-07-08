//
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int mem(int x,int y,int z, string s, vector<vector<vector<vector<int>>>> &dp){
    if(x==0 && y==0 && z==0)return 0;
    int k;
    if(s=="")k=0;
    else if(s=="AA")k=1;
    else if(s=="BB")k=2;
    else k=3;
    if(dp[x][y][z][k]!=-1)return dp[x][y][z][k];

    if(s=="AA"){
        int l=0,k=0;
        if(y>0)l=2+mem(x,y-1,z,"BB",dp);

        return dp[x][y][z][1]=max(l,k);
    }
    else if(s=="BB"){
        int  l=0,k=0;
        if(x>0)l=2+mem(x-1,y,z,"AA",dp);
        if(z>0)k=2+mem(x,y,z-1,"AB",dp);
        
        return dp[x][y][z][2]=max(l,k);
    }
    else if(s=="AB"){
        int l=0,k=0;
        if(x>0)l=2+mem(x-1,y,z,"AA",dp);
        if(z>0)k=2+mem(x,y,z-1,"AB",dp);

        return dp[x][y][z][3]=max(l,k);
    }
    else{
        int l=0,m=0,n=0;
        if(x>0)l=2+mem(x-1,y,z,"AA",dp);
        if(y>0)m=2+mem(x,y-1,z,"BB",dp);
        if(z>0)n=2+mem(x,y,z-1,"AB",dp);

        return dp[x][y][z][0]=max(l,max(m,n));
    }

    return 0;

}

int sol(int x,int y,int z){
    vector<vector<vector<vector<int>>>> dp(x+1,vector<vector<vector<int>>>(y+1,vector<vector<int>>(z+1,vector<int>(4,-1))));
    return mem(x,y,z,"",dp);
}

int32_t main(){
    int x,y,z;cin>>x>>y>>z;
    cout<<50*50*50*4;
}