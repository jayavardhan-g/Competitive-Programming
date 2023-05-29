#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        map<int,int> ma,mb;
        for(int i=0;i<n;i++){
            int x=1;
            while(i<n-1){
                if(a[i]==a[i+1]){i++;x++;}
                else break;
            }
            ma[a[i]]=max(x,ma[a[i]]);
        }
        for(int i=0;i<n;i++){
            int x=1;
            while(i<n-1){
                if(b[i]==b[i+1]){i++;x++;}
                else break;
            }
            mb[b[i]]=max(x,mb[b[i]]);
            
        }

        cout<<endl;
        int ans=0;
        for(auto i:ma){
            ans=max(ans, (i.second + mb[i.first]));
        }
        for(auto i:mb){
            ans=max(ans, (i.second + ma[i.first]));
        }
        cout<<ans;
    }
}