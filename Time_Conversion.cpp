#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
    int ans=-1;
    int a[26]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++){
        if(a[s[i]-'a']==1){
            ans=i;
            break;
        }
    }
    return ans;
}
int main(){
    string s;cin>>s;
    cout<<firstUniqChar(s);
}