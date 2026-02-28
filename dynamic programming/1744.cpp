#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int a,b;
    cin>>a>>b;
    vector<vector<int>> dp(a+1,vector<int>(b+1,1e9));// dp[i][j] -> min cuts to make rectangle i*j into squares

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
           if(i==j){
            dp[i][j] = 0;
            continue;
           }
           for(int h=1;h<=i-1;h++){
            dp[i][j] = min(dp[i][j] , 1 + dp[h][j] + dp[i-h][j]);
           }
           for(int v=1;v<=j-1;v++){
            dp[i][j] = min(dp[i][j] , 1 + dp[i][v] + dp[i][j-v]);
           }
        }
    }
    cout<<dp[a][b]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}