#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int bs(int money,int pos,int hi, int v[]){
	pos--;
	int lo = pos;
	money= v[lo]+money;
	// cout<<money<<' '<<pos<<' '<<hi<<endl;
	int r=-1;
	while(lo<=hi){
		int mid = lo+ (hi-lo)/2;
		if(v[mid]<=money){
			r= mid;
			lo=mid+1;
		}else{
			hi=mid-1;
		}
	}
			// cout<<'r'<<' '<<r<<'l'<<lo<<endl;
	// cout<<r<<' '<<endl;
	// cout<<r<<lo<<' '<<endl;
	return r-pos;
}

int32_t main(){
	// int n,q;
	// cin>>n;
	// int a[n];
	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }
	// for(int i=1;i<n;i++)a[i]=a[i]+a[i-1];
	// int n,q;
	// cin>>n;
	// int a[n+1];
	// a[0]=0;
	// for(int i=1;i<n;i++){
	// 	cin>>a[i];
	// 	a[i]=a[i]+a[i-1];
	// }
	// // for(int i=1;i<n;i++)a[i]=a[i]+a[i-1];
	// // for(int i=0;i<n+1;i++)cout<<a[i]<<' ';
	// // cout<<endl;
	// cin>>q;
	// cin>>q;
	// while(q--){
	// 	int x,m;
	// 	cin>>x>>m;
	// 	cout<<bs(m,x,n,a)<<endl;
	// }
	cout<< sqrt(1e6+1);
}