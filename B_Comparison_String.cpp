#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s(n,'0');cin>>s;
        int M=0;
        set<int> ss;
        int x=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                x++;
                M=max(M,x);
            }
            else{
                
                x=0;
            }
            
        }
        cout<<M+2<<endl;
    }
}