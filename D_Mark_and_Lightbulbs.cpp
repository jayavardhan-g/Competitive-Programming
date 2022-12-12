#include <iostream>
using namespace std;
bool check(char *a, int i,int j){
    
    if(a[i-1]==a[i+1]){
        if(check(a,i+1,j))return true;
    }
    else{
        if(a[i]=='0')a[i]=1;
        else a[i]=0;
        j++;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        int n;
        cin>>n;
        char a[n];
        char b[n];
        int k=0;
        int j=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=1;i<n-1;i++){
            if(a[i]!=b[i]){
                cout<<"Sending a["<<i<<']'<<endl;
                k=check(a,i,j);
            }
        }
        cout<<k;
    }
}