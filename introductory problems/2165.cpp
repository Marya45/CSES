#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void recur(vector<pair<int,int>>&ans,int n,int src,int aux,int des){
    if(n==1){
        ans.push_back({src,des});
        return ;
    }
    recur(ans,n-1,src,des,aux);
    ans.push_back({src,des});
    recur(ans,n-1,aux,src,des);
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> ans;
    recur(ans,n,1,2,3);
    cout<<ans.size()<<"\n";
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<"\n";
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