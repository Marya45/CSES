#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
int total = 0;

void recur(int i,vector<int>&wt,int curr,int &ans){
    if(i==wt.size()){
        int f = curr;
        int s = total - curr;
        ans = min(ans,abs(f-s));
        return;
    }
    recur(i+1,wt,curr + wt[i],ans);
    recur(i+1,wt,curr,ans);
}

void solve(){
    int n;
    cin>>n;
    vector<int> wt(n);
    for(int i=0;i<n;i++){
        cin>>wt[i];
        total += wt[i];
    }
    int ans = INT_MAX;
    recur(0,wt,0,ans);
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