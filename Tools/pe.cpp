#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    vector<double> v(5);
    v[0]=0.1;v[1]=0.2;v[2]=0.3;v[3]=0.5; v[4]=0.6;
    for(auto dt: v){
        double vi,vo,ii,db,e,n,x,po;
        cin>>vo;
        cin>>ii;
        vi=10;
        x=vo/vi;
        db=(x-1)/x;
        e=(dt-db)/dt;
        po=(vo*vo)/100;
        n=(po/ii*vi)*100;
        cout<<"x "<<x<<endl;
        cout<<"error in d "<<e*100<<endl;
        cout<<"p in "<<vi*ii<<endl;
        cout<<"p out "<<po<<endl;
        cout<<"d obs "<<db<<endl;
        cout<<"efficiency "<<n/100<<endl;
        cout<<endl;
        cout<<"-0-0-0-0-0-0-0-0-0-0-"<<endl<<endl;;
    }
}