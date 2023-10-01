#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve(vector<vector<int>> &v){
	int n=v.size(),m=v[0].size();
	vector<vector<int>> b(n);

	for(int i=0;i<m;i++){
		vector<int> t;
		for(int j=0;j<n;j++){
			t.push_back(v[j][i]);	
		}
		sort(t.begin(),t.end());
		b[i]=t;
	}
	
}

int32_t main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int m;cin>>m;
		vector<vector<int>> v(n,vector<int>(m));for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>v[i][j];
	}
}