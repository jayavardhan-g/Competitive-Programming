#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;cin>>n;
    int k;cin>>k;

    set <int> s;
    s.insert(0);
    int a=0,i=0;
    while(1){
        i=i+a*k;
        if(i>n)i=i-n;
        if(s.find(i)==s.end())s.insert(i);
        else break;
    }
    for(int i=0;i<n;i++){
        if(s.find(i)==s.end())cout<<i+1<<" ";
    }
}