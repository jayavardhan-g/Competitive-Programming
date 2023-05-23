#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    int i=0,j=0;
    while(i<(n-1) && j<m){
        if(a[i]>b[j]){
            swap(a[i],a[i+1]);
            swap(a[i],b[j]);
            i++;
            j++;
            continue;
        }
        else{
            i++;
            continue;
        }
        
    }
    

    for(int i=0;i<m;i++)cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}