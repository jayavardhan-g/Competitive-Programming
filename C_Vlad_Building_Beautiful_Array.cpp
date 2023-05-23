#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        int e=0,o=0;
        int me=INT_MAX,mo=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){e++;
                me=min(me,a[i]);
            }
            else{ o++;
                mo=min(mo,a[i]);
            }
        }
        if(e==0 || o==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(mo<me)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}