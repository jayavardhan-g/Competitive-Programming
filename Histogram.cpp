#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int histogram(vector<int> &v){
	int a=0;
	for(int i=0;i<v.size();i++){
		int m=v[i];
		for(int j=i;j>=0;j--){
			m=min(m,v[j]);
			a= max( a, m*(i-j+1));
		}
	}
	return a;
}

int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &v, int n, int m){
	vector<vector<pair<int,int>>> hw(n,vector<pair<int,int>>(m,0));

	for(int i=n-2;i>=0;i--){
		for(int j=0;j<m;j++){
			if (v[i][j] == 1) {
			v[i][j] = v[i + 1][j];
			}
		}
	}

    for(auto i:v){for(auto j:i)cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}

int32_t main(){
    int n;cin>>n;
    vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];
    cout<<histogram(v);
}