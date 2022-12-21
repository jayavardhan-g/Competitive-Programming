#include <bits/stdc++.h>
using namespace std;
#define int long long
int XOR(int a,int b){
    a^=b;
    return a;
}
int AND(int a,int b){
    a&=b;
    return a;
}
vector<int> solve(vector<int> &A, vector<vector<int> > &B) {
    vector<int> s(B.size());
    for(int i=0;i<B.size();i++){
        int l1=B[i][0],r1=B[i][1],l2=B[i][2],r2=B[i][3];
        int x=A[l1],y=A[l2];
        for(int i=l1;i<=r1;i++){
            x=AND(A[i],x);
        }
        for(int i=l2;i<=r2;i++){
            y=AND(A[i],y);
        }
        int ans=y^x;
        s.push_back(ans);
        
    }
    return s;
}

int32_t main(){
    vector<int> v;
    int n=1;
    while(n!=0){
        cin>>n;
        v.push_back(n);
    }
    vector<vector<int>> b;
    int l=1;
    while(l!=0){
        vector<int> k;
        for(int i=0;i<4;i++){
            cin>>l;
            k.push_back(l);
        }
        b.push_back(k);
    }
    vector<int> ans=solve(v,b);
}