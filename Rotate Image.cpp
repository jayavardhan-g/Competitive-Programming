//https://leetcode.com/problems/rotate-image/description/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> t(n);
        for(int j=0;j<n;j++){
            cin>>t[j];
        }
        v.push_back(t);
    }
    for(int i=0;i<v.size()/2;i++){
        for(int j=i;j<n-1-i;j++){
            int temp=v[i][j];
            v[i][j]=v[n-j-1][i]; // top
            
            v[n-j-1][i]=v[n-i-1][n-j-1]; //left
            
            v[n-i-1][n-1-j]=v[j][n-i-1]; //bottom
            
            v[j][n-i-1]=temp; //right
        }
    }   

}
/*
int temp=v[i][j];
        v[i][j]=v[n-j-1][i]; // top
        v[n-j-1][i]=v[n-i-1][n-j-1]; //left
        v[n-i-1][n-1-j]=v[j][n-i-1]; //bottom
        v[j][n-i-1]=temp; //right
*/