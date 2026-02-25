#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define int long long
const int MOD = 1e9+7;

int recur(int x,int i,vector<int>&a,vector<vector<int>>&dp){
    if(x==0){
        return 1;
    }
    if(i>=a.size()){
        return 0;
    }
    if(dp[x][i]!=-1){
        return dp[x][i];
    }
    int take = 0;
    if(x >= a[i]){
        take = recur(x-a[i],i,a,dp);
    }
    int nottake = recur(x,i+1,a,dp);

    return dp[x][i] = (take+nottake)%MOD;
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    // cout<<recur(x,0,a,dp)<<"\n";

    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }

    for(int i=n-1;i>=0;i--){
        for(int sum=1;sum<=x;sum++){
            dp[i][sum] = dp[i+1][sum]%MOD;
            if(sum-a[i] >= 0){
                dp[i][sum] = (dp[i][sum]+dp[i][sum-a[i]])%MOD;
            }
        }
    }
    cout<<dp[0][x]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}