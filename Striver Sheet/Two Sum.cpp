#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int,int>> v(nums.size());
    for(int i=0;i<nums.size();i++){
        v[i].first=nums[i];
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    // for(auto i:v)cout<<i.first<<'-'<<i.second<<endl;
    int lo=0;
    int hi=nums.size()-1;
    while(lo<hi){
        if(v[lo].first+v[hi].first==target){
            return {v[lo].second,v[hi].second};
        }else if(v[lo].first+v[hi].first<target){
            lo++;
        }else{
            hi--;
        }
    }
    return {};
}

int32_t main(){
    int n;cin>>n;
    int t;cin>>t;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    vector<int> ans= twoSum(v,t);
    cout<<ans[0]<<' '<<ans[1]<<endl;
}