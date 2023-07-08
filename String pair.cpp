//
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int maximumNumberOfStringPairs(vector<string>& words) {
        int f[26][26];
        memset(f,0,sizeof(f));
        for(int i=0;i<words.size();i++){
            f[words[i][0]-'a'][words[i][1]-'a']=1;
        }
        int  ans=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<i;j++){
                if(f[i][j] && f[j][i])ans++;
            }
        }
        return ans;
    }
int32_t main(){
    int n;cin>>n;
    vector<string> v(n);for(int i=0;i<n;i++)cin>>v[i];
    cout<<maximumNumberOfStringPairs(v);
}