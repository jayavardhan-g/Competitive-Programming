#include<bits/stdc++.h>
using namespace std;
bool cols(vector<vector<char>>&v){
    int a[10]={0};
    for(int j=0;j<9;j++)a[j]=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(v[i][j]=='.')continue;
            int x=v[i][j]-48;
            if(a[x]>0){
                a[x]++;
                return false;}
            else a[x]++;
        }
        for(int j=0;j<10;j++)a[j]=0;
    }
    return true;
}

bool rows(vector<vector<char>>&v){
    int a[10]={0};
    for(int j=0;j<9;j++)a[j]=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(v[j][i]=='.')continue;
            int x=v[j][i]-48;
            if(a[x]>0)return false;
            else a[x]++;
        }
        for(int j=0;j<10;j++)a[j]=0;
    }
    return true;
}

bool check(int i,int j,vector<vector<char>> v){
    int a[10]={0};
    for(int x=0;x<10;x++)a[i]=0;
    for(int l=i;l<(i+3);l++){
        for(int k=j;k<(j+3);k++){
            if(v[l][k]=='.')continue;
            int x=v[l][k]-48;
            if(a[x]>0)return false;
            else a[x]++;
        }
    }
    return true;

}
    
bool mini(vector<vector<char>> v){
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            if(check(i,j,v));
            else return false;
        }
    }
    return true;
}
bool isValidSudoku(vector<vector<char>>& board) {
    if(rows(board)&&cols(board)&&mini(board))return true;
    return false;
}
int main(){
    vector<vector<char>>v;
    char x;
    for(int i=0;i<9;i++){
        vector<char>c ;
        for(int i=0;i<9;i++){
            cin>>x;
            c.push_back(x);
        }
        v.push_back(c);
        c.clear();
    }

    cout<<isValidSudoku(v);
}