#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> dp(n,vector<int>(m+2,0)); //dp[i][x] -> no of ways to fill 0..i such that ith element is x 
    if(arr[0]==0){
        for(int i=1;i<=m;i++){
            dp[0][i] = 1;
        }
    }
    else{
        dp[0][arr[0]] = 1;
    }

    for(int i=1;i<n;i++){
        for(int x=1;x<=m;x++){
            if(arr[i]==0 || arr[i]==x){
                dp[i][x] = (dp[i-1][x-1] + dp[i-1][x] + dp[i-1][x+1])%MOD;
            }
        }
    }
    int ans = 0;
    for(int x=1;x<=m;x++){
        ans = (ans + dp[n-1][x]) % MOD;
    }
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