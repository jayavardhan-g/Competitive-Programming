#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int minimumMoves(vector<vector<int>>& v) {
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};

    queue<vector<int>> q;
    // queue<pair<pair<int,int>,int>> qq;

    for(int i=0;i<3;i++)for(int j=0;j<3;j++){
        if(v[i][j]==0){
            q.push({i,j,i,j,0});
        }
    }
    
    vector<vector<set<pair<int,int>>>> vis(3,vector<set<pair<int,int>>>(3));
    
    int ans=0;

    while(!q.empty()){
        auto node= q.front();
        q.pop();
        int i=node[0],j=node[1];

        if(v[i][j]==1)continue;

        int x=node[2],y=node[3];
        int z=node[4];
        vis[x][y].insert({i,j});
        if(v[x][y]>1){
            ans+= z;
            v[x][y]--;
            v[i][j]=1;
            cout<<i<<' '<<j<<' '<<x<<' '<<y<<' '<<z<<endl;
            continue;
        }
        
        for(int l=0;l<4;l++){
            if(x+dx[l]>=0 && x+dx[l]<3 && y+dy[l]>= 0 && y+dy[l]<3){
                if(vis[x][y].find({x+dx[l],y+dy[l]})!=vis[x][y].end())continue;
                q.push({i,j,x+dx[l],y+dy[l],z+1});
            }
        }
    }
    return ans;
}

int32_t main(){
    vector<vector<int>> grid(3,vector<int>(3));
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)cin>>grid[i][j];    

    cout<< minimumMoves(grid);
}