#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int find_ind(vector<vector<int>>&arr,int r){
    int l = 0;
    int val = arr[r][0]; 
    int ind = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid][1] < val){
            l = mid+1;
            ind = mid;
        }
        else{
            r = mid-1;
        }
    }
    return ind;
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(3)); //0 -> st , 1 -> end , 2 -> profit
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    sort(arr.begin(),arr.end(),[&](vector<int>&a,vector<int>&b){
        if(a[1] == b[1]){
            return a[0] < b[0];
        }
        return a[1]<b[1];
    });
    vector<int> dp(n,0); //dp[i] => max profit from [0..i]
    dp[0] = arr[0][2];
    for(int i=1;i<n;i++){
        int op1 = dp[i-1];
        int op2 = arr[i][2];
        int ind = find_ind(arr,i); //find ind whose end is < start of curr
        if(ind!=-1){
            op2 += dp[ind];
        }
        dp[i] = max(op1,op2);
    }

    cout<<dp[n-1]<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}