#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

vector<string> recur(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string> prev = recur(n-1);
    vector<string> res = prev;
    reverse(res.begin(),res.end());

    for(int i=0;i<prev.size();i++){
        string z = prev[i] + "0";
        res[i] += "1";
        res.push_back(z);
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<string> ans = recur(n);
    for(auto it:ans){
        cout<<it<<"\n";
    }cout<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}