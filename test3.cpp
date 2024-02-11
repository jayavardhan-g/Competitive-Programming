#include<bits/stdc++.h>
using namespace std;
int ans= 0;
void foo(string s){
    if(s.length()<1){
        ans++;
    }
    unordered_set<char> uset;
    for(int i=0;i<s.length();i++){
        if(uset.find(s[i])!=uset.end()){
            continue;
        }else{
            uset.insert(s[i]);
        }
        string temp="";
        if(i<s.length()-1){
            temp= s.substr(0,i)+s.substr(i+1);
        }else{
            temp = s.substr(0,i);
        }
        foo(temp);
    }
}

int32_t main(){
    string s= "MAXWELL";
    foo(s);
    cout<<ans<<endl;
}