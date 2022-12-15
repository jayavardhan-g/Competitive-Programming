#include<iostream>
using namespace std;
int main(){
    int i, j, N;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        cout<<i;
        for(j=1; j<=((N - i) * 2 - 1); j++)
        {
            cout<<" ";
        }
        if(i != N)
            cout<<i;
        cout<<endl;
    }
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }

        cout<<i;
        for(j=1; j<=((N - i ) * 2 - 1); j++)
        {
            cout<<" ";
        }

        cout<<i;
        cout<<endl;
    }


}
