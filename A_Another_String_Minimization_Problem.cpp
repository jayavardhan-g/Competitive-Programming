#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n,m,x;
        cin>>n>>m;
        vector <int> v;
        for(int i=0;i<n;i++){cin>>x;v.push_back(x);}
        string s(m,'B');
        for(int i=0;i<n;i++){
            int y=v[i]-1,z=m-v[i];
            if(y<z){
                if(s[y]=='B')s[y]='A';
                else s[z]='A';
            }
            else {
                if(s[z]=='B')s[z]='A';
                else s[y]='A';
            }
        }
        cout<<s<<endl;
    }
}