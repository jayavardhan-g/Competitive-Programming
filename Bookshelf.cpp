#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

int n;
int32_t dp[10001][10001];
vector<int32_t> v;

int modInverse(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1)
        return 0;

    // Apply extended Euclidean algorithm
    while (a > 1) {
        q = a / m;
        t = m;

        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0)
        x1 += m0;

    return x1;
}


int rec(int p,int i){
    if(i==n)return 0;
    if(p!=-1 && dp[i][p]!=-1)return dp[i][p];

    int ph = p==-1?-1:v[p];
    int ans=0;
    if(v[i]>ph)ans= 1+ rec(i,i+1);
    ans = max(ans,rec(p,i+1));

    return dp[i][p]=ans;
}

int32_t main(){
    cin>>n;v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];
    memset(dp,-1,sizeof(dp));
    int ans = rec(-1,0);
    ans= modInverse(ans,1e6+7);
    cout<<ans;
}
// #include<bits/stdc++.h>
// using namespace std;

// map<pair<int, int>, int> memo;

// int solve(vector<int>& rods, int i, int diff, int n) {
//     if (i == n) {
//         if (diff == 0) return 0;
//         return INT_MIN;
//     }

//     if (memo.find({i, diff}) != memo.end()) return memo[{i, diff}];

//     int a = solve(rods, i + 1, diff, n);
//     int b = rods[i] + solve(rods, i + 1, diff + rods[i], n);
//     int c = rods[i] + solve(rods, i + 1, diff - rods[i], n);

//     memo[{i, diff}] = max(a,max(b,c));
//     return memo[{i, diff}];
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     cout << solve(arr, 0, 0, n) / 2 << endl;

//     return 0;
// }