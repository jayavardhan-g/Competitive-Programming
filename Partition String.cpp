#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

    int partitionString(string s) {
        map<char,int> m;
        int x=1;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==1){
                x++;
                m.clear();
                m[s[i]]=1;
            }else{
                m[s[i]]++;
            }
        }
        return x;
    }

int32_t main(){
    string s;cin>>s;
    cout<<partitionString(s);
}