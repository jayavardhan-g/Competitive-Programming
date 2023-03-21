#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    string s;
    cin>>s;
    if(s[8]=='A'){
        if(s[0]=='1'&s[1]=='2'){s[0]='0',s[1]='0';}
        
    }
    else{
        if(s[0]=='1'&s[1]=='2'){}
        else{
            int x;
            char a[2];
            a[0]=s[0];a[1]=s[1];
            x=atoi(a);
            x+=12;
            s[0]=x/10+'0';
            s[1]=x%10+'0';
        }
    }
    s=s.substr(0,8);
    cout<<s;
}