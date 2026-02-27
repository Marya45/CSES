#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> dp(n,vector<int>(2,0));
    // dp[i][0] => no of ways to fill rows from (i to n) such that last row had 2 growing blocks
    // dp[i][1] => no of ways to fill rows from (i to n) such that last row had 1*2 type of growing block
    dp[n-1][0] = 1;
    dp[n-1][1] = 1;

    for(int i=n-2;i>=0;i--){
        dp[i][0] = (4*dp[i+1][0] + dp[i+1][1])%MOD; //close both blocks + don't close any of them + close one of them
        dp[i][1] = (2*dp[i+1][1] + dp[i+1][0])%MOD; //close the complete block + don't close the block
    }

    cout<<(dp[0][0] + dp[0][1])<<"\n";
}

signed main(){
    fastio();
    int t=1;
    cin>>t;
    vector<vector<int>> dp(1e6+1,vector<int>(2,0));
    dp[0][0] = 1;
    dp[0][1] = 1;
    for(int i=1;i<1e6;i++){
        dp[i][0] = (2LL * dp[i-1][0] + dp[i-1][1]) % MOD;
        dp[i][1] = (4LL * dp[i-1][1] + dp[i-1][0]) % MOD;
    }
    while(t--){
        // solve();
        int n;
        cin >> n;
        cout << (dp[n-1][0] + dp[n-1][1]) % MOD << endl;
    }
}