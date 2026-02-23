#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define int long long

int recur(int i,int x,vector<int>&prices,vector<int>&pages,vector<vector<int>>&dp){
    if(i==prices.size()){
        return 0;
    }
    if(dp[i][x]!=-1){
        return dp[i][x];
    }
    int take = 0;
    if(x >= prices[i]){
        take = pages[i] + recur(i+1,x-prices[i],prices,pages,dp);
    }
    int not_take = recur(i+1,x,prices,pages,dp);

    return dp[i][x] = max(take,not_take);
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> prices(n) , pages(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    // cout<<recur(0,x,prices,pages,dp)<<"\n";

    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j] = dp[i-1][j];
            if(j >= prices[i-1]){
                dp[i][j] = max(dp[i][j],pages[i-1] + dp[i-1][j-prices[i-1]]);
            }
        }
    }
    cout<<dp[n][x]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}