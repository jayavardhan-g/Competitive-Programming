#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,n,m;cin>>b>>n>>m;
    vector<int> k(n);
    vector<int> u(n);
    k[0]=0;u[0]=0;
    for(int i=0;i<n;i++){cin>>k[i];}
    for(int i=0;i<m;i++){cin>>u[i];}
    int max=-1;
    for(int i=0;i<n;i++){
        for(int  j=0;j<m;j++){
            int x=k[i]+u[j];
            if(x<=b&&x>max)max=x;
        }
    }
    cout<<max;
}