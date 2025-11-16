#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i && arr[i] < arr[i-1]){
            ans += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
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