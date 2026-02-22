#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int recur(int x,vector<int>&dp,vector<int>&a){
    if(x < 0){
        return 1e8;
    }
    if(x==0){
        return 0;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int w = 1e8;
    for(int i=0;i<a.size();i++){
        w = min(w,1 + recur(x-a[i],dp,a));
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
    recur(x,dp,a);
    cout<<(dp[x]>=1e8 ? -1 : dp[x])<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}