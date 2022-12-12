#include <bits/stdc++.h>
using namespace std;
bool check(string s, string t){
    char f[26];
    int f2[26];
    for(int i=0;i<26;i++){f[i]=0;f2[i]=0;}
    int x;
    for(int i=0;i<s.length();i++){
        x=s[i]-'a';
        if(f[x]!=0){
            if(t[i]==f[x])continue;
            else return false;
        }
        else {
            if(f2[t[i]-'a']==0){
                f2[t[i]-'a']=1;
                f[x]=t[i];
                continue;
            }
            else return false;
        }
    }
    return true;
}

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    cout<<check(s,t);
}