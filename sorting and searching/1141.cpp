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
    int ans = 0, len = 0;
    int i=0,j=0;
    while(j<n){
        
        while(i<j && mp.count(arr[j])){
            mp.erase(arr[i]);
            i++;
            len--;
        }
        
        mp[arr[j]]++;
        j++;
        len++;
        ans = max(ans,len);
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