#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int recur(int i,int j,string &a,string &b,vector<vector<int>>&dp){
    if(i == a.length()){
        return b.length() - j;
    }
    if(j==b.length()){
        return a.length() - i;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    if(a[i] == b[j]){
        return dp[i][j] = recur(i+1,j+1,a,b,dp);
    }
    else{
        return dp[i][j] = 1 + min({ recur(i,j+1,a,b,dp), recur(i+1,j,a,b,dp) , recur(i+1,j+1,a,b,dp) });//add,remove,replace
    }
}

void solve(){
    string a , b;
    cin>>a>>b;
    int n = a.length();
    int m = b.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    for(int i=0;i<=n;i++){
        dp[i][0] = i;
    }
    for(int j=0;j<=m;j++){
        dp[0][j] = j;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min({dp[i][j-1] , dp[i-1][j] , dp[i-1][j-1]});
            }
        }
    }
    cout<<dp[n][m]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}