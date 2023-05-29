#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        vector<int> v;
        bool ans=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')v.push_back(1);
            else if(s[i]=='[')v.push_back(2);
            else if(s[i]=='{')v.push_back(3);
            
            else if(s[i]==')'){
                if(v.size()==0){
                    ans=0;
                    break;
                }
                if(v[v.size()-1]==1)v.pop_back();
                else {
                    ans=0;
                    break;
                }
            }
            else if(s[i]==']'){
                if(v.size()==0){
                    ans=0;
                    break;
                }
                if(v[v.size()-1]==2)v.pop_back();
                else {
                    ans=0;
                    break;
                }
            }
            else{
                if(v.size()==0){
                    ans=0;
                    break;
                }
                if(v[v.size()-1]==3)v.pop_back();
                else {
                    ans=0;
                    break;
                }
            }
            
        }
        if(ans && v.size()==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}