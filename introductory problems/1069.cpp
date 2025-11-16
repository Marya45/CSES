#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    string s;
    cin>>s;
    int ans = 1, cnt = 1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            cnt = 0;
        }
        cnt++;
        ans = max(cnt,ans);
    }
    cout<<ans<<'\n';
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}