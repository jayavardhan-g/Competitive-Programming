#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

    int maxScore(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        int ans=INT_MIN;
        vector<vector<int>> z(n,vector<int>(m,0));

        z[n-1][m-1]=v[n-1][m-1];

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i+1<n){
                    z[i][j]= max(z[i+1][j],v[i+1][j]);
                }
                if(j+1<m){
                    z[i][j]= max(z[i][j], max(z[i][j+1],v[i][j+1]));
                }
                if(i!=n-1 || j!=m-1){
                    ans = max(z[i][j]- v[i][j], ans);
                }
                cout<<i<<' '<<j<<' '<<ans<<endl;
            }
        }

        for(auto i:z){
            for(auto j:i)cout<<j<<' ';
            cout<<endl;
        }

        return ans;
    }

int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)cin>>v[i][j];
    }
    cout<<maxScore(v);
}