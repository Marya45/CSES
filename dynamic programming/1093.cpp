#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

int recur(int i,int n,int sum,vector<vector<int>>&dp){
    if(sum == 0){
        return 1;
    }
    if(i>n || sum < 0){
        return 0;
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }
    int t = recur(i+1,n,sum-i,dp);
    int nt = recur(i+1,n,sum,dp);
    return dp[i][sum] = (t + nt)%MOD;
}

void solve(){
    int n;
    cin>>n;
    int t_sum = n*(n+1)/2;
    if(t_sum%2==0){
        int target = t_sum/2;
        vector<int> dp(target+1,0);
        dp[0]=1;
        // i<n because as per our logic we are calculating for set not having n, it will be in the opposite set
        for(int i=1;i<n;i++){ 
            for(int j=target;j>=i;j--){
                dp[j] += dp[j-i];
                dp[j]%=MOD;
            }
        }
        cout<<dp[target]<<endl;
        
    }
    else{
        cout<<"0\n";
    }
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}