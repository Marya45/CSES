#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

int solve(int n,vector<int>&dp){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int w = 0;
    for(int i=1;i<=6;i++){
        w += solve(n-i,dp);
        w%=MOD;
    }
    return dp[n] = w%MOD;
}

signed main(){
    fastio();
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<solve(n,dp)<<"\n";
}