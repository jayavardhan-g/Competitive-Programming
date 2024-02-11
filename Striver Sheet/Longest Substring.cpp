#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int lengthOfLongestSubstring(string s) {
    // map<char,int> m;
    int ans=0;
    // unsigned long c=0;
    // m[s[0]]=0;
    string t;
    for(int i=0;i<s.length();i++){
        int ind= t.find(s[i]);
        if(ind>=t.length()){
            t+=s[i];
            cout<<t<<endl;
        }
        else{
            int l=t.length();
            ans= max(l,ans);
            t.erase(0,ind+1);
            t+=s[i];
            cout<<t<<endl;
        }
    }
    int l=t.length();
    ans= max(l,ans);
    return ans;
}

int32_t main(){
    string s;cin>>s;
    cout<<lengthOfLongestSubstring(s);
}