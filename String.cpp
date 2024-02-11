#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

bool compare(string a,string b){
    if(a.length()<b.length())return true;
    return false;
}

string solve(vector<string>&v){
    sort(v.begin(),v.end(),compare);
    // reverse(v.begin(),v.end());
    string ans="";

    for(auto i:v)cout<<i<<' ';
    cout<<endl;
    for(int i=v.size()-1;i>0;i--){
        for(int j=i-1;j>=0;j--){
            if(v[i]!=v[j] && v[i].find(v[j])>v[i].length() ){
                return v[i];
            }
        }
    }
    return "null";
}

int32_t main(){
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    cout<<solve(v);
}