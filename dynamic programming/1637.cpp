#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        int num = i;
        while(num > 0){
            int dig = num%10;
            dp[i] = min(dp[i],1 + dp[i-dig]);
            num/=10;
        }
    }

    cout<<dp[n]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}