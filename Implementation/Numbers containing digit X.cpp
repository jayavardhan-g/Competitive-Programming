#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
vector<int> v(7,0);
int d;

int count(int N, int X)
    {

        int cnt = 0;

        for (int i = 1; i <= N; i *= 10) {
            int divi = i * 10;
            int quot = N / divi;
            int rem = N % divi;

            if (quot > 0) {
                cnt = cnt + (quot * i);
            }

            if (X == 0) {
                cnt = cnt - i;
            }

            if (rem >= X * i) {
                cnt = cnt + (min(rem - X * i + 1, i));
            }
        }

        return cnt;
    }


int upto(int n){
    if(n<10) return d&(d<=n);
    int l= log10(n);
    int div= pow(10,l);
    int r = n/div;
    int q = n%div;

    int ans= 0;
    
    if(r>d){
        ans+= (r-1)*v[l-1] + div ;
        ans+= upto(q);
    }else if(r==d){
        ans+= (r)*v[l-1] + q+1;
    }else{
        ans+= (r)*v[l-1];
        ans+= upto(q);
    }
    return ans;
}

int32_t main(){
    int l,r;
    cin>>l>>r>>d;
    int u= log10(r);
    // cout<<u<<endl;
    // vector<int> v(u+1,0);
    v[0]=1;
    for(int i=1;i<7;i++){
        v[i] = v[i-1]*9 + pow(10,i);
    }
    // for(auto i:v)cout<<i<<' ';
    // cout<<endl;
    cout<<upto(r)<<' '<<upto(l)<<endl;
    cout<<count(r,d)<<' '<<count(l,d)<<endl;
}