#include<bits/stdc++.h>
using namespace std;
#define endl cout<<"\n";
#define int long long

int mod(int x){
    if(x<0)return -x;
    return x;
}
//0 to n approach
int sol(int a[],int i,int sum,int n,vector<int> dp){
    if(i==n-1)dp[i]=0;
    if(i==n-2)dp[i]=mod(a[i]-a[i+1]);

    if(dp[i]==-1){
        dp[i]=min(sol(a,i+1,mod(a[i]-a[i+1]),n,dp), sol(a,i+2,mod(a[i]-a[i+2]),n,dp));
    }
    return sum+dp[i];
}
//n to 0 approach
int sol(int a[],int i, int sum, vector<int> dp){
    if(i==0)dp[i]=0;
    if(i==1)dp[i]=mod(a[i]-a[i-1]);

    if(dp[i]==-1){
        dp[i]=min(sol(a,i-1,mod(a[i]-a[i-1]),dp), sol(a,i-2,mod(a[i]-a[i-2]),dp));
    }
    return sum+dp[i];
}

// tabulation
int sol(int a[],int n){
    int dp[n]={0};
    dp[0]=0;
    for(int i=1;i<n;i++){
        int fs=dp[i-1]+ mod(a[i]-a[i-1]);
        int ss=INT_MAX;
        if(i>1){
            ss=dp[i-2]+mod(a[i]-a[i-2]);
        }
        dp[i]=min(fs,ss);
    }
    return dp[n-1];
}
//
int space(int a[],int n){ 
    int c,a1=0,a2,fs;
    for(int i=1;i<n;i++){
        fs=a1 + mod(a[i]-a[i-1]);
        int ss=INT_MAX;
        if(i>1){
            ss=a2+mod(a[i]-a[i-2]);
        }
        c=min(fs,ss);
        
        a2=a1;
        a1=c;
    }
    return a1;
}

int32_t main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,-1);


    cout<<sol(a,0,0,n,dp);endl;
    cout<<sol(a,n-1,0,dp);endl;
    cout<<sol(a,n);endl;
    cout<<space(a,n);endl;
}