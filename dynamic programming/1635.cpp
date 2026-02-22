#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

int recur(int x,vector<int>&a,vector<int>&dp){
    if(x<0){
        return 0;
    }
    if(x==0){
        return 1;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int w = 0;
    for(int i=0;i<a.size();i++){
        if(x-a[i]>=0){
            w = (w + recur(x-a[i],a,dp))%MOD;
        }
    }
    return dp[x] = w;
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(x+1,-1);
    dp[0] = 1;
    recur(x,a,dp);
    cout<<dp[x]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}