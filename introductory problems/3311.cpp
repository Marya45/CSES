#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

bool ispossible(int i,int j,vector<vector<char>>&arr,vector<vector<char>>&prev,char val){
    if(val == prev[i][j]){
        return false;
    }
    if(i-1>=0 && arr[i-1][j]==val){
        return false;
    }
    if(j-1>=0 && arr[i][j-1]==val){
        return false;
    }
    return true;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> prev(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>prev[i][j];
        }
    }
    vector<vector<char>> arr(n,vector<char>(m,'A'));
    char val[4] = {'A','B','C','D'};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            bool flag = true;
            for(int k=0;k<4;k++){
                if(ispossible(i,j,arr,prev,val[k])){
                    arr[i][j] = val[k];
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"IMPOSSIBLE\n";
                return;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }cout<<"\n";
    }
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
