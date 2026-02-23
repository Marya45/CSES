#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

int recur(int i,int j,vector<string>&arr,vector<vector<int>>&dp){
    if(i==arr.size()-1 && j==arr.size()-1 && arr[i][j]!='*'){
        return 1;
    }
    if(i<0 || i>=arr.size() || j<0 || j>=arr.size() || arr[i][j] == '*'){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int right = 0 , down = 0;
    if(i+1 < arr.size() && arr[i+1][j] != '*'){
        right = recur(i+1,j,arr,dp);
    }
    if(j+1 < arr.size() && arr[i][j+1]!='*'){
        down = recur(i,j+1,arr,dp);
    }

    return dp[i][j] = (right + down)%MOD;
}

void solve(){
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> dp(n,vector<int>(n,-1));
    cout<<recur(0,0,arr,dp)<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}