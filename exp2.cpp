#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t=10;
    while(t--){
        double pi=3.141592653589793;
        double a,b,v,s,e;
        cin>>a>>b>>s;
        v=170*sqrt(2);
        e=s*1.4*2*pi/60;
        a=a*pi/180;
        b=b*pi/180;
        double v0= (1/pi)*(v*(1+cos(a))+(pi+a-b)*e);
        cout<<10-t<<"."<<e<<" "<<v0<<endl<<endl;
    }f

}