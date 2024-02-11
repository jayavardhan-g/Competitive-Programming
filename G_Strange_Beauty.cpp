// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define int long long
// int n;
// vector<int> v;
// int maxx= 2e5+1;

// int rec(int i,int pi){
//     if(i<0)return 0;

//     int p=1e7,np=1e7;
//     if(pi==n|| v[pi]%v[i]==0)p= rec(i-1,i);
//     np=1+ rec(i-1,pi);

//     return min(p,np);
// }

// int iter(){
//     vector<int> dp(maxx);
//     // dp[v[0]]=1;
//     for(int i=0;i<n;i++){
//         dp[v[i]]=dp[v[i]]+1;
//         if(v[i]!=1)dp[v[i]]= max(dp[1]+1,dp[v[i]]);
//         for(int j=2;j*j<=v[i];j++){
//             if(v[i]%j==0){
//                 dp[v[i]]= max(dp[v[i]], max(dp[j]+1,dp[v[i]/j]+1));
//             }
//         }
//     }
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans= max(ans, dp[v[i]]);
//     }
//     // for(int i=0;i<maxx;i++)ans=max(ans,dp[i]);
//     return n-ans;
// }

// int rec(int x){
    
//     int ans=0;
//     for(int i=2;i*i<=x;i++){
//         if(x%i==0){
//             ans=max(1 + rec(x/i),ans);
//             ans=max(1 + rec(i),ans); 

//         }
//     }
//     return ans;
// }

// void solve(){
//     cin>>n;
//     // unordered_map<string,int> m;
//     v.resize(n);for(int i=0;i<n;i++)cin>>v[i];
//     sort(v.begin(),v.end());
//     cout<<iter()<<endl;
// }

// int32_t main(){
//     int t;cin>>t;
//     while(t--)solve();
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		const int MAX=2e5+1;
		vector<int> dp(MAX);
		//dp[i]-> The max reside if we consider i element at the end of the beautiful array
		sort(a.begin(),a.end());
		dp[a[0]]=1; 
		for(int i=1;i<n;i++){
			dp[a[i]]=dp[a[i]]+1;
	        // Now I’m going through all the factors of a[i] below         
			if(a[i]!=1) dp[a[i]]=max(dp[a[i]],dp[1]+1);
                                 // Here factor is 1
			for(int j=2;j*j<=a[i];j++){
				if(a[i]%j==0){
					dp[a[i]]=max(dp[a[i]],dp[j]+1);
                                 // Here factor is j
					dp[a[i]]=max(dp[a[i]],dp[a[i]/j]+1);
                                 // Here factor is a[i]/j
				}
			}	
		}

		int ans=0;
		for(int i=0;i<=MAX;i++) ans=max(ans,dp[i]);
		cout<<n-ans<<endl;	
	}
}    

