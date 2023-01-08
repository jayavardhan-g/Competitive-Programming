#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v){
    vector<int> x=v;
    int count=0;
    do{
        for(int i=0;i<v.size();i++){
            x[i]=x[x[i]];
        }
        count++;
    }while(v!=x);
    return count;
}

int main(){
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<solve(v);
}