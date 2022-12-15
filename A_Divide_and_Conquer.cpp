#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int> even,vector<int> odd){
    bool x=false;
    int o=0,e=0;
    while(x==false){
        o++;
        for(int i=0;i<odd.size();i++){
            odd[i]/=2;
            if(odd[i]%2==0){x=true;break;}
            }
    }
    x=false;
    while(e<o&&x==false){
        e++;
        for(int i=0;i<even.size();i++){
            even[i]/=2;
            if(even[i]%2==1){x=true;break;}
        }
    }
    return min(e,o);
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> even;vector<int> odd;
        int e=0,o=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0)even.push_back(x);
            else odd.push_back(x);
        }
        e=even.size();o=odd.size();

        if(o%2==0){cout<<0<<endl;continue;}

        if(o%2==1){
            int x=solve(even,odd);
            cout<<x<<endl;
        }
        
    }
}