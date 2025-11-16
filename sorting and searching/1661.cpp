#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,target;
    cin>>n>>target;
    vector<int> pref(n);
    for(int i=0;i<n;i++){
        cin>>pref[i];
        if(i){
            pref[i] += pref[i-1];
        }
    }
    map<int,int> mp;
    mp[0]++;
    int ans = 0;

    for(int i=0;i<n;i++){
        ans += mp[pref[i]-target];
        mp[pref[i]]++;
    }

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