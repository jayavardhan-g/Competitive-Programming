// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// bool compare(pair<int,int>c1, pair<int,int> c2){
//     if(c1.first+c1.second > c2.first+c2.second)return true;
//     return false;
// }

// int32_t main(){
//     int n;cin>>n;
//     vector<pair<int,int>> v;
//     int a=0,t=0;
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         a+=x;
//         v.push_back(make_pair(y,x));
//     } 
//     sort(v.begin(),v.end(),compare);
//     int i=0;
//     while(t<=a){
//         t+=v[i].first + v[i].second;
//         a-=v[i].second;
//         i++;
//     }
//     cout<<i;
    
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,suma=0,t=0,count=0;
    cin>>n;
    vector<int>veca,vect,vecc;
    for(i=0;i<n;i++)
    {   
        int a;;
        cin>>a;
        veca.push_back(a);
        cin>>a;
        vect.push_back(a);
        vecc.push_back(2*veca[i]+vect[i]);
        suma=suma+veca[i];
    }
    sort(vecc.begin(),vecc.end());
    reverse(vecc.begin(),vecc.end());
    for(i=0;i<vecc.size();i++)
    {
        if(t<suma)
        {
            t=t+vecc[i];
            count++;
        }
        else{
            break;
        }
    }
    cout<<i;
    
}