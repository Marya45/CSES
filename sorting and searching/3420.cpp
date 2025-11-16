#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    int i=0,j=0;
    int ans = 0;
    int cnt = 0;
    while(j<n){
        if(mp.count(arr[j])){
            while(mp.count(arr[j])){
                mp.erase(arr[i]);
                ans += j-i;
                i++;
            }
        }
        mp[arr[j]]++;    
        j++;
    }
    while(i<j){
        ans += j-i;
        i++;
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