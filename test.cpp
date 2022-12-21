#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> solve(string A, vector<int> &B) {
    for(int i=0;i<B.size();i++){
        int x=B[i]-1;
        int y=0;
        for(int i=1;i<(A.size()+1)/2;i++){
            int a=x+i,b=x-i;
            if(b<0)break;
            if(a>=A.size())break;
            if(A[a]==A[b])y++;
        }
        if(y==0)B[i]=0;
        else B[i]=y*2+1;
    }
    return B;
}

int32_t main(){
    string s;cin>>s;
    vector<int> v;
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        v.push_back(x);
    }
    v=solve(s,v);
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';

}