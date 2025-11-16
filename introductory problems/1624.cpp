#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
int ans;

bool possible(int r,int c,vector<vector<char>>arr){
    // left , right
    for(int j=0;j<8;j++){
        if(arr[r][j]=='+'){
            return false;
        }
    }
    // top, bottom
    for(int i=0;i<8;i++){
        if(arr[i][c]=='+'){
            return false;
        }
    }

    // top left diagonal
    int i=r,j=c;
    while(i>=0 && j>=0){
        if(arr[i--][j--]=='+'){
            return false;
        }
    }
    // top right diagonal
    i=r;j=c;
    while(i>=0 && j<8){
        if(arr[i--][j++]=='+'){
            return false;
        }
    }
    // bottom left diagonal
    i=r;j=c;
    while(i<8 && j>=0){
        if(arr[i++][j--]=='+'){
            return false;
        }
    }
    // bottom right diagonal
    i=r;j=c;
    while(i<8 && j<8){
        if(arr[i++][j++]=='+'){
            return false;
        }
    }
    return true;
}

void recur(int i,int q,vector<vector<char>>&arr){
    if(q==0){
        ans++;
    }
    if(i>=8){
        return;
    }
    for(int col=0;col<8;col++){
        if(arr[i][col]=='.' && possible(i,col,arr) ){
            arr[i][col] = '+';
            recur(i+1,q-1,arr);
            arr[i][col] = '.';
        }
    }
}

void solve(){
    vector<vector<char>> arr(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }
    recur(0,8,arr);
    cout<<ans<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}