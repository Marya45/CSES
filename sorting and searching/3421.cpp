#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;
// 0 1 2 3
// 1 2 1 3
// 1 -> {} {0} {2}
// 2 -> {} {1}
// 3 -> {} {3}
// 3*2*2 - 1

void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans = 1;
    for(auto it:mp){
        ans = (ans*(it.second + 1))%MOD;
    }
    cout<<ans-1<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}