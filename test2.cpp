#include<bits/stdc++.h>
using namespace std;
#define int long long

void minimax(int* a){
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int i,j;
    vector<int> min;vector<int> max;
    int b[n];
    for(int i=0;i<n/2;i++)min.push_back(a[i]);
    for(int i=n/2;i<n;i++)max.push_back(a[i]);

    for(int i=0;i<n;i+=2){
        a[i]=min[i];
    }
    for(int i=1;i<n;i+=2){
        a[i]=max[max.size()-1];
        max.pop_back();
    }

}

int32_t main(){
    int n;cin>>n;
    int  a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    minimax(a);
    for(int i=0;i<n;i++)cout<<a[i]<<' ';
    cout<<endl;
}