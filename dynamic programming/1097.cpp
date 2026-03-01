#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
 
    // dp[i][j] => best score from index i to j
    vector<ll> prefixSums(n);
    vector<vector<ll>> dp(n, vector<ll>(n)); // 2D table of size n * n
    for (int i = 0; i < n; i++) {
        dp[i][i] = nums[i];
        prefixSums[i] = nums[i];
        if (i > 0)
            prefixSums[i] += prefixSums[i - 1];
    }
 
    // build the dp table
    for (int size = 2; size <= n; size++) {
        for (int i = size - 1; i < n; i++) {
            ll total = i < size ? prefixSums[i] : prefixSums[i] - prefixSums[i - size];
            ll selectLast = total - dp[i - size + 1][i - 1];
            ll selectFist = total - dp[i - size + 2][i];
            dp[i - size + 1][i] = max(selectFist, selectLast);
        }
    }
    cout<<dp[0][n-1]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}