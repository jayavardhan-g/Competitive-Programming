//https://leetcode.com/contest/weekly-contest-348/problems/sum-of-matrix-after-queries/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    int a[n][n];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cout<<a[i][j]<<' ';
        cout<<endl;
    }
    int sum[n];
    memset(sum,0,sizeof(sum));

    int q;cin>>q;
    while(q--){
        bool c;cin>>c;
        int x;cin>>x;
        int v;cin>>v;
        if(c==0){
            sum[x]=v*n;
        }
        else{
            for(int i=0;i<n;i++){
                sum[i]= sum[i]+v-a[i][x];
            }
        }
    }
}