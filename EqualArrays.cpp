#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& a) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            a[i]=sum;
            if(sum<0)sum=0;
            
            if(a[i]>max)max=a[i];
        }
        return max;
    }
int main(){
    int n,x;cin>>n;
    vector <int > v1, v2;
    for(int i=0;i<n;i++){cin>>x;v1.push_back(x);}
    for(int i=0;i<n;i++){cin>>x;v2.push_back(x);}

    cout<<maxSubArray(v1);

}