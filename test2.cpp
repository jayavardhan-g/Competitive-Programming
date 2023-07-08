#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n";
string removeDuplicates(string str) {
	    string ans=str;
	    map<char,int> m;
	    for(int i=0;i<ans.size();i++){
	        if(m[ans[i]]==0)m[ans[i]]++;
            else{ ans.erase(i,1);i--;}
	    }
	    return ans;
}
int32_t main(){
    string s;cin>>s;
    cout<<removeDuplicates(s);   
}