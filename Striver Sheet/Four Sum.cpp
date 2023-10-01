#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

vector<vector<int>> fourSum(vector<int>& v, int target) {
    vector<vector<int>> r;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-3;i++){
        // if(v[i]==v[i+1])continue;
        for(int j=i+1;j<v.size()-2;j++){
            // if(v[j]==v[j+1])continue;
            int tar=target-v[i]-v[j];
            int lo=j+1,hi=v.size()-1;
            while(lo<hi){
                // if(v[lo]==v[lo+1])lo++;
                if(v[lo]+v[hi]<tar)lo++;
                else if(v[lo]+v[hi]>tar)hi--;
                else{
                    r.push_back({v[i],v[j],v[lo],v[hi]});
                }
            }
        }
    }
    return r;
}

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);
    int t;cin>>t;
    auto r= fourSum(v,t);
    for(auto i:r){
        for(auto j:i)cout<<j<<' ';
        cout<<endl;
    }
}